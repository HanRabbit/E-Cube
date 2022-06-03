// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: ECubeUI
#include <Arduino.h>
#include <lvgl.h>
#include <WiFi.h>
#include <EEPROM.h>
// #include <WString.h>
#include "ui.h"
#include "ui_helpers.h"
// #include "ui_group.cpp"
// #include "get_time.cpp"

#define WIFI_CONNECT_TIME 15

extern lv_group_t *ui_group;

String wifi_ssid = "_", wifi_pwd = "_", wifi_ip = "_";

struct WiFi_config {
	char sta_ssid[32];
	char sta_pwd[32];
};

WiFi_config wifi_config;


bool wifi_init();


void disp_ssid(String in_ssid) {
	lv_label_set_text(ui_Label5, ("#2095f6 SSID#  : 	" + in_ssid).c_str());
}

void disp_pwd(String in_pwd) {
	lv_label_set_text(ui_Label6, ("#2095f6 PWD# : 	" + in_pwd).c_str());
}

void disp_ip(String in_ip) {
	lv_label_set_text(ui_Label7, ("#2095f6 IP#       : 	" + in_ip).c_str());
}

void switch_focus(lv_obj_t *obj) {
	/* 切换控制焦点 */
	// lv_group_focus_freeze(ui_group, false);
	lv_group_focus_obj(obj);
	// lv_group_focus_freeze(ui_group, true);
}

void wifi_config_init() {
	EEPROM.begin(1024);
	for (int dn = 0; dn < sizeof(wifi_config); dn ++) {
		EEPROM.write(dn, 0);
	}
	EEPROM.commit();
}

void write_wifi_config() {
	/* WiFi 数据写入 */
	EEPROM.begin(1024);
	uint8_t *p = (uint8_t *)(&wifi_config);
	for (int dn = 0; dn < sizeof(wifi_config); dn ++) {
		EEPROM.write(dn, *(p + dn));
	}
	EEPROM.commit();
}

void read_wifi_config()
{
	/* WiFi 数据读取 */
	EEPROM.begin(1025);
	uint8_t *p = (uint8_t*)(&wifi_config);
	for (int dn = 0; dn < sizeof(wifi_config); dn++) {
		*(p + dn) = EEPROM.read(dn);
	}
	// EEPROM.commit();

	wifi_ssid = wifi_config.sta_ssid;
	wifi_pwd = wifi_config.sta_pwd;

	lv_log(("SSID:" + wifi_ssid).c_str());
	lv_log(("PWD:" + wifi_pwd).c_str());
}

void wifi_input() {
	wifi_pwd = lv_textarea_get_text(ui_TextArea1);
	_ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_FADE_ON, 1, 0);

	wifi_ssid.toCharArray(wifi_config.sta_ssid, sizeof(wifi_config.sta_ssid));
	wifi_pwd.toCharArray(wifi_config.sta_pwd, sizeof(wifi_config.sta_pwd));
	write_wifi_config();

	// logOut();
	// lv_log(wifi_ssid.c_str());
	// lv_log(wifi_pwd.c_str());
}

void PWD_input(lv_event_t * e)
{
	// Your code here
	wifi_input();
}

void label_update() {
	lv_label_set_text(ui_Label8, LV_SYMBOL_REFRESH);
	lv_label_set_text(ui_Label10, LV_SYMBOL_HOME);
	lv_label_set_text(ui_Label11, LV_SYMBOL_LEFT);
	lv_label_set_text(ui_Label12, LV_SYMBOL_LEFT);
}

void wifi_connect(lv_event_t * e)
{
	// Your code here
	label_update();

	lv_group_remove_all_objs(ui_group);
	lv_group_add_obj(ui_group, ui_Panel1);
	lv_group_add_obj(ui_group, ui_Button2);
	lv_group_add_obj(ui_group, ui_Button1);
	switch_focus(ui_Panel1);
	lv_group_focus_freeze(ui_group, false);

	read_wifi_config();

	if (wifi_ssid == '\0' || wifi_pwd == '\0') {
		_ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 1, 0);
		return;
	}

	int connect_time = 0;		/* (s) */
	// lv_label_set_text(ui_Label4, "WiFi CONNECTING...");
	WiFi.begin(wifi_ssid.c_str(), wifi_pwd.c_str());

	while(!WiFi.isConnected()) {
		delay(1000);
		connect_time++;
		lv_log(String(connect_time).c_str());
		if (connect_time >= WIFI_CONNECT_TIME) {
			lv_textarea_set_text(ui_TextArea1, "");
			lv_label_set_text(ui_Label4, "WiFi PASSWORD WRONG");
			wifi_config_init();
			_ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0);
			return;
		}
	}
	if (connect_time < WIFI_CONNECT_TIME) {
		lv_label_set_text(ui_Label4, "WiFi CONNECTED");

		disp_ssid(wifi_ssid);
		disp_pwd(wifi_pwd);
		disp_ip(WiFi.localIP().toString());
	}
}

void selectWiFi(lv_event_t * e) {
	// Your code here
	wifi_ssid = WiFi.SSID(lv_roller_get_selected(ui_Roller2));

	lv_group_remove_all_objs(ui_group);
	lv_group_add_obj(ui_group, ui_Keyboard1);
	switch_focus(ui_Keyboard1);

	_ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 1, 0);
}

void wifi_ssid_scan() {
	int netNum = WiFi.scanNetworks(false, true);
	String rollerOptions = "";
	
	lv_group_remove_all_objs(ui_group);
	lv_group_add_obj(ui_group, ui_Roller2);
	lv_group_add_obj(ui_group, ui_Button4);
	switch_focus(ui_Roller2);

	for (int netItem = 0; netItem < netNum; netItem++) {
		rollerOptions += WiFi.SSID(netItem) + "\n";
	}
	lv_roller_set_options(ui_Roller2, rollerOptions.c_str(), LV_ROLLER_MODE_NORMAL);
}

bool wifi_init() {
	// wifi_config_init();
	// read_wifi_config();
	if (wifi_ssid == '\0' || wifi_pwd == '\0') {
		return true;
	} else {
		switch_focus(ui_Panel1);
		_ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_FADE_ON, 1, 0);
		return false;
	}
}

/* Screen2 启动时加载事件 */
void ssid_scan(lv_event_t * e) {
	// Your code here
	if (wifi_init()) {
		lv_log("wifi_scaning");
		wifi_ssid_scan();
	}
}

void eeprom_clear() {
	for (int dn = 0; dn < sizeof(wifi_config); dn ++) {
		EEPROM.write(dn, 0);
	}
}

void change_focus(int mode) {
	/*
		mode:
			1 : -> 密码输入
			2 : -> WiFi 选择
			0 : -> Home Page
	*/
	switch (mode) {
		case 0:
			lv_group_remove_all_objs(ui_group);
			lv_group_add_obj(ui_group, ui_Screen5);
			// lv_group_add_obj(ui_group, ui_Screen6);
			lv_group_add_obj(ui_group, ui_Dropdown1);
			switch_focus(ui_Screen5);
			break;
		case 1:
			lv_group_remove_all_objs(ui_group);
			lv_group_add_obj(ui_group, ui_Keyboard1);
			lv_group_add_obj(ui_group, ui_Button3);
			switch_focus(ui_Keyboard1);
			break;
		case 2:
			lv_group_remove_all_objs(ui_group);
			lv_group_add_obj(ui_group, ui_Roller2);
			lv_group_add_obj(ui_group, ui_Button4);
			switch_focus(ui_Roller2);
			break;
	}
}

void wifi_ref(lv_event_t * e)
{
	// Your code here
	if (lv_group_get_focused(ui_group) == ui_Button2) {
		eeprom_clear();
		WiFi.disconnect();
		change_focus(1);
		_ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0);
	} else if (lv_group_get_focused(ui_group) == ui_Button3) {
		wifi_config_init();
		change_focus(2);
		_ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0);
	}
}
