#include <Arduino.h>
#include <WiFi.h>
#include <lvgl.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

#include "ui.h"
#include "ui_helpers.h"

const char *ntp_server = "us.pool.ntp.org";
const long gmt_offset_sec = 8 * 3600;

struct tm time_info;

extern void change_focus(int mode);
extern void virus_data_init();

bool first_start = true;

HTTPClient http;

const char *virus_url = "https://lab.isaaclin.cn/nCoV/api/area?latest=1&province=河北省";

int baoding_confirmedCount;
int baoding_suspectedCount;
int baoding_curedCount;
int baoding_deadCount;

int xiongan_confirmedCount;
int xiongan_suspectedCount;
int xiongan_curedCount;
int xiongan_deadCount;

int hb_confirmedCount;
int hb_suspectedCount;
int hb_curedCount;
int hb_deadCount;

void sec_roller_init() {
    String roller_list = "";
    for (int s = 0; s < 60; s ++) {
        roller_list += s;
        roller_list += "\n";
    }
    lv_roller_set_options(ui_Roller1, roller_list.c_str(), LV_ROLLER_MODE_NORMAL);
}


void set_sec_roller(uint16_t sec) {
    lv_roller_set_selected(ui_Roller1, sec, LV_ANIM_ON);
}

String get_days(int day) {
	switch (day) {
	case 0:
		return "Sun";
		break;
	case 1:
		return "Mon";
		break;
	case 2:
		return "Tue";
		break;
	case 3:
		return "Wed";
		break;
	case 4:
		return "Thu";
		break;
	case 5:
		return "Fri";
		break;
	case 6:
		return "Sat";
		break;
	}
}

String get_great(int hour) {
    if (abs(hour - 5) <= 2) {
            return "Good Morning";
    } else if (abs(hour - 8) <= 2) {
            return "Good Morning";
    } else if (abs(hour - 11) <= 2) {
            return "Good Noon";
    } else if (abs(hour - 15) <= 3) {
            return "Good Afternoon";
    } else if (abs(hour - 19) <= 5 || abs(hour) <= 4) {
            return "Good Evening";
    }
}


void get_local_time() {
    /* 两个日期使用一个变量，节省内存资源 */
    String home_time_str;

    if (WiFi.status() != WL_CONNECTED) {
        // lv_label_set_text(ui_label15, "WiFi Was Disconnected");
        return;
    }
    if (!getLocalTime(&time_info)) {
        lv_log("Error: Time request failed!");
        return;
    }

    home_time_str = String(time_info.tm_hour) + " : #2095f6 ";
    if (time_info.tm_min < 10) {
        /* 补零 */
        home_time_str += "0" + String(time_info.tm_min);
    } else {
        home_time_str += String(time_info.tm_min);
    }

    lv_label_set_text(ui_Label13, home_time_str.c_str());

    home_time_str = String(time_info.tm_year + 1900) + " - " + 
    String(time_info.tm_mon + 1) + " - " + String(time_info.tm_mday);

    lv_label_set_text(ui_Label14, home_time_str.c_str());
    lv_label_set_text(ui_Label15, get_great(time_info.tm_hour).c_str());
    lv_label_set_text(ui_Label16, get_days(time_info.tm_wday).c_str());

    set_sec_roller(time_info.tm_sec);

    // lv_log(home_time_str.c_str());
}

void time_init() {
    configTime(gmt_offset_sec, 0, ntp_server);
    change_focus(0);
    sec_roller_init();
    get_local_time();
}

void time_update(lv_timer_t *timer) {
    get_local_time();
}

void home_on_load(lv_event_t * e)
{
	// Your code here
    // get_virus_data();
    if (first_start) {
        time_init();
        virus_data_init();
    }

    lv_timer_t *timer_time = lv_timer_create(time_update, 1000, NULL);
    // xTaskCreate(time_update, "time_update", 1000, NULL, tskIDLE_PRIORITY + 3, NULL);
}