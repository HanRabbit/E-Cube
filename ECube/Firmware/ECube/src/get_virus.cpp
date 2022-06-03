#include <Arduino.h>
#include <WiFi.h>
#include <lvgl.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

#include "ui.h"
#include "ui_helpers.h"

#include <Arduino.h>
#include <lvgl.h>
#include <ArduinoJson.h>

#include "ui.h"
#include "ui_helpers.h"

extern lv_group_t *ui_group;
extern bool first_start;
int virus_view_mode = 0;        /* 0: Hebei, 1: China, 2: Abroad */

const char * HeBei_Virus_Url = "https://lab.isaaclin.cn/nCoV/api/area?country=%E4%B8%AD%E5%9B%BD&province=%E6%B2%B3%E5%8C%97%E7%9C%81&sort=currentConfirmedCount&latest=true";
const char * World_Virus_Url = "https://lab.isaaclin.cn/nCoV/api/overall";

struct virus_data{
    long currentConfirmedCount;     //现存确诊
    long currentConfirmedIncr;      //较昨日
    long confirmedCount;            //累计确诊
    long confirmedIncr;             //较昨日
    long curedCount;                //累计治愈
    long curedIncr;                 //较昨日
    long seriousCount;              //现存无症状
    long seriousIncr;               //较昨日
    long deadCount;                 //累计死亡
    long deadIncr;                  //较昨日
    String updateTime;              //更新时间
};

virus_data vdata;              //国内疫情数据

void put_virus_data() {
    lv_label_set_text(ui_Label26, ("Current: #ff4141 " + String(vdata.currentConfirmedCount)).c_str());
    lv_label_set_text(ui_Label27, ("Confirmed: #2095f6 " + String(vdata.confirmedCount)).c_str());

    lv_label_set_text(ui_Label19, String(vdata.currentConfirmedCount).c_str());
    lv_label_set_text(ui_Label21, String(vdata.confirmedCount).c_str());
    lv_label_set_text(ui_Label23, String(vdata.curedCount).c_str());
    lv_label_set_text(ui_Label25, String(vdata.deadCount).c_str());
}

void update_virus_data() {
    HTTPClient http;

    if (virus_view_mode == 1 || virus_view_mode == 2) {
        http.begin(World_Virus_Url);     /* 向该网址发送http数据请求 */
    } else if (virus_view_mode == 0) {
        http.begin(HeBei_Virus_Url);
    }
    int httpCode = http.GET();     /* 返回的状态码 */

    if (httpCode > 0)
    {
        if (httpCode == HTTP_CODE_OK) /* httpCode == 200 */
        {
            String payload = http.getString();
            // lv_log(payload.c_str());

            DynamicJsonDocument doc(1000);     //创建DynamicJsonDocument对象
            deserializeJson(doc, payload);     //反序列化数据
            JsonObject results_0 = doc["results"][0];

            if (virus_view_mode == 0 || virus_view_mode == 1) {
                vdata.currentConfirmedCount = results_0["currentConfirmedCount"].as<int>();
                vdata.currentConfirmedIncr = results_0["currentConfirmedIncr"].as<int>();
                vdata.confirmedCount = results_0["confirmedCount"].as<int>();
                vdata.confirmedIncr = results_0["confirmedIncr"].as<int>();
                vdata.curedCount = results_0["curedCount"].as<int>();
                vdata.curedIncr = results_0["curedIncr"].as<int>();
                vdata.deadCount = results_0["deadCount"].as<int>();
                vdata.deadIncr = results_0["deadIncr"].as<int>();
                vdata.seriousCount = results_0["seriousCount"].as<int>();
                vdata.seriousIncr = results_0["seriousIncr"].as<int>();
            } else if (virus_view_mode == 2) {
                vdata.currentConfirmedCount = results_0["globalStatistics"]["currentConfirmedCount"].as<long>();
                vdata.currentConfirmedIncr = results_0["globalStatistics"]["currentConfirmedIncr"].as<long>();
                vdata.confirmedCount = results_0["globalStatistics"]["confirmedCount"].as<long>();
                vdata.confirmedIncr = results_0["globalStatistics"]["confirmedIncr"].as<long>();
                vdata.curedCount = results_0["globalStatistics"]["curedCount"].as<long>();
                vdata.curedIncr = results_0["globalStatistics"]["curedIncr"].as<long>();
                vdata.deadCount = results_0["globalStatistics"]["deadCount"].as<long>();
                vdata.deadIncr = results_0["globalStatistics"]["deadIncr"].as<long>();
            }

            put_virus_data();
        }
    }
    else {  /* Error */
        lv_log(("[HTTP] GET... failed, error: %s\n" + http.errorToString(httpCode)).c_str());
        http.end(); /* 结束连接 */
        update_virus_data();
    }
    http.end(); /* 结束连接 */
}

void get_virus_data(lv_timer_t * timer) {
    update_virus_data();
}

void virus_data_init() {
    /* 启用定时器 每十秒调用一次 */
    update_virus_data();

    lv_dropdown_set_text(ui_Dropdown1, NULL);
    lv_group_set_wrap(ui_group, false);

    lv_timer_t * timer_get_virus = lv_timer_create(get_virus_data, 60000, NULL);
}

void time_switch_screen(lv_event_t * e) {
    first_start = false;
    if (lv_group_get_focused(ui_group) == ui_Dropdown1 && lv_scr_act() == ui_Screen5) {
        _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_MOVE_TOP, 200, 0);
    }
    if (lv_group_get_focused(ui_group) == ui_Screen5 && lv_scr_act() == ui_Screen6) {
        _ui_screen_change(ui_Screen5, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 0);
    }
}

void selectArea(lv_event_t * e) {
	virus_view_mode = lv_dropdown_get_selected(ui_Dropdown1);
    lv_log(String(virus_view_mode).c_str());
    update_virus_data();
}
