// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: ECubeUI

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Bar1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Roller2;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Button4;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Screen3;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Bar2;
lv_obj_t * ui_TextArea1;
lv_obj_t * ui_Keyboard1;
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Screen4;
lv_obj_t * ui_Bar3;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Screen5;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Roller1;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Label26;
lv_obj_t * ui_Label27;
lv_obj_t * ui_Screen6;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Dropdown1;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Label19;
lv_obj_t * ui_Panel6;
lv_obj_t * ui_Label24;
lv_obj_t * ui_Label25;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

// ui_EloAnimation0
// FUNCTION HEADER
void startBarAnim1_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void startBarAnim1_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 600);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_width);
    lv_anim_set_values(&PropertyAnimation_0, 0, 200);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 4900);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

    //
    lv_anim_t PropertyAnimation_2;
    lv_anim_init(&PropertyAnimation_2);
    lv_anim_set_time(&PropertyAnimation_2, 600);
    lv_anim_set_user_data(&PropertyAnimation_2, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_2, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_2, 0, 40);
    lv_anim_set_path_cb(&PropertyAnimation_2, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_2, delay + 5000);
    lv_anim_set_early_apply(&PropertyAnimation_2, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_2, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_2);

}

// ui_EloAnimation0
// FUNCTION HEADER
void startLogoAnim1_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void startLogoAnim1_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 600);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 60, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 600);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 400);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_in);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 800);
    lv_anim_set_early_apply(&PropertyAnimation_1, true);
    lv_anim_start(&PropertyAnimation_1);

    //
    lv_anim_t PropertyAnimation_2;
    lv_anim_init(&PropertyAnimation_2);
    lv_anim_set_time(&PropertyAnimation_2, 600);
    lv_anim_set_user_data(&PropertyAnimation_2, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_2, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_2, 0, -60);
    lv_anim_set_path_cb(&PropertyAnimation_2, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_2, delay + 2000);
    lv_anim_set_early_apply(&PropertyAnimation_2, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_2, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_2);

    //
    lv_anim_t PropertyAnimation_3;
    lv_anim_init(&PropertyAnimation_3);
    lv_anim_set_time(&PropertyAnimation_3, 800);
    lv_anim_set_user_data(&PropertyAnimation_3, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_3, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_3, 0, 40);
    lv_anim_set_path_cb(&PropertyAnimation_3, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_3, delay + 4500);
    lv_anim_set_early_apply(&PropertyAnimation_3, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_3, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_3);

    //
    lv_anim_t PropertyAnimation_4;
    lv_anim_init(&PropertyAnimation_4);
    lv_anim_set_time(&PropertyAnimation_4, 200);
    lv_anim_set_user_data(&PropertyAnimation_4, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_4, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_4, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_4, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_4, delay + 4500);
    lv_anim_set_early_apply(&PropertyAnimation_4, false);
    lv_anim_start(&PropertyAnimation_4);

}

// ui_EloAnimation0
// FUNCTION HEADER
void startEcubeAnim_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void startEcubeAnim_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 600);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, 25);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 2000);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 2300);
    lv_anim_set_early_apply(&PropertyAnimation_1, true);
    lv_anim_start(&PropertyAnimation_1);

    //
    lv_anim_t PropertyAnimation_2;
    lv_anim_init(&PropertyAnimation_2);
    lv_anim_set_time(&PropertyAnimation_2, 800);
    lv_anim_set_user_data(&PropertyAnimation_2, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_2, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_2, 0, 40);
    lv_anim_set_path_cb(&PropertyAnimation_2, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_2, delay + 4200);
    lv_anim_set_early_apply(&PropertyAnimation_2, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_2, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_2);

    //
    lv_anim_t PropertyAnimation_3;
    lv_anim_init(&PropertyAnimation_3);
    lv_anim_set_time(&PropertyAnimation_3, 200);
    lv_anim_set_user_data(&PropertyAnimation_3, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_3, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_3, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_3, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_3, delay + 4200);
    lv_anim_set_early_apply(&PropertyAnimation_3, false);
    lv_anim_start(&PropertyAnimation_3);

}

// ui_EloAnimation0
// FUNCTION HEADER
void keyBoardShow_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void keyBoardShow_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 400);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 150, 40);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);

}

// ui_EloAnimation0
// FUNCTION HEADER
void keyBoardHide_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void keyBoardHide_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 400);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 40, 150);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);

}

// ui_EloAnimation0
// FUNCTION HEADER
void showDataAnim_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void showDataAnim_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 400);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 150, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}

// ui_EloAnimation0
// FUNCTION HEADER
void showGreatAnim_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void showGreatAnim_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 400);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -50, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        startBarAnim1_Animation(ui_Bar1, 1000);
        startLogoAnim1_Animation(ui_Image1, 1500);
        startEcubeAnim_Animation(ui_Label1, 1800);
        startEcubeAnim_Animation(ui_Label2, 1800);
        _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_FADE_ON, 1, 7000);
        _ui_bar_set_property(ui_Bar1, _UI_BAR_PROPERTY_VALUE_WITH_ANIM, 100);
    }
}
static void ui_event_Image1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        _ui_bar_set_property(ui_Bar1, _UI_BAR_PROPERTY_VALUE_WITH_ANIM, 100);
    }
}
static void ui_event_Screen2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        ssid_scan(e);
        _ui_flag_modify(ui_Keyboard1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Roller2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
static void ui_event_Roller2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        selectWiFi(e);
    }
}
static void ui_event_Button4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        ssid_scan(e);
    }
}
static void ui_event_Screen3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        _ui_flag_modify(ui_Roller2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Keyboard1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
static void ui_event_Keyboard1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_READY) {
        PWD_input(e);
    }
}
static void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        wifi_ref(e);
    }
}
static void ui_event_Screen4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        wifi_connect(e);
        _ui_bar_set_property(ui_Bar3, _UI_BAR_PROPERTY_VALUE_WITH_ANIM, 100);
    }
}
static void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen5, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
    }
}
static void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        wifi_ref(e);
    }
}
static void ui_event_Screen5(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        home_on_load(e);
        showGreatAnim_Animation(ui_Label15, 0);
        showDataAnim_Animation(ui_Label27, 200);
        showDataAnim_Animation(ui_Label26, 100);
        _ui_flag_modify(ui_Label26, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Label15, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Label27, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event == LV_EVENT_FOCUSED) {
        time_switch_screen(e);
        _ui_flag_modify(ui_Panel6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Panel5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Panel4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Panel3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
static void ui_event_Screen6(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        showDataAnim_Animation(ui_Panel6, 300);
        showDataAnim_Animation(ui_Panel5, 200);
        showDataAnim_Animation(ui_Panel4, 100);
        showDataAnim_Animation(ui_Panel3, 0);
        _ui_flag_modify(ui_Panel6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Panel5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Panel4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Panel3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
static void ui_event_Dropdown1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_FOCUSED) {
        time_switch_screen(e);
        _ui_flag_modify(ui_Label27, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Label26, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Label15, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if(event == LV_EVENT_VALUE_CHANGED) {
        selectArea(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image1

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_logo2_small_png);

    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image1, 6);
    lv_obj_set_y(ui_Image1, -1);

    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Image1, ui_event_Image1, LV_EVENT_ALL, NULL);

    // ui_Bar1

    ui_Bar1 = lv_bar_create(ui_Screen1);
    lv_bar_set_range(ui_Bar1, 0, 100);

    lv_obj_set_width(ui_Bar1, 200);
    lv_obj_set_height(ui_Bar1, 4);

    lv_obj_set_x(ui_Bar1, 0);
    lv_obj_set_y(ui_Bar1, 30);

    lv_obj_set_align(ui_Bar1, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Bar1, lv_color_hex(0x1E90FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_anim_time(ui_Bar1, 5500, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Bar1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 15);
    lv_obj_set_y(ui_Label1, 2);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "-Cube");

    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, -40);
    lv_obj_set_y(ui_Label2, 2);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "E");

    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x1E90FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Screen2_screen_init(void)
{

    // ui_Screen2

    ui_Screen2 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Roller2

    ui_Roller2 = lv_roller_create(ui_Screen2);
    lv_roller_set_options(ui_Roller2, "", LV_ROLLER_MODE_NORMAL);

    lv_obj_set_width(ui_Roller2, lv_pct(66));
    lv_obj_set_height(ui_Roller2, lv_pct(58));

    lv_obj_set_x(ui_Roller2, 0);
    lv_obj_set_y(ui_Roller2, 12);

    lv_obj_set_align(ui_Roller2, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_Roller2, ui_event_Roller2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Roller2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label9

    ui_Label9 = lv_label_create(ui_Screen2);

    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label9, 0);
    lv_obj_set_y(ui_Label9, -70);

    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label9, "SSID SELECT");

    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button4

    ui_Button4 = lv_btn_create(ui_Screen2);

    lv_obj_set_width(ui_Button4, 20);
    lv_obj_set_height(ui_Button4, 20);

    lv_obj_set_x(ui_Button4, 130);
    lv_obj_set_y(ui_Button4, -66);

    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label8

    ui_Label8 = lv_label_create(ui_Button4);

    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label8, 0);
    lv_obj_set_y(ui_Label8, 0);

    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label8, "R");

}
void ui_Screen3_screen_init(void)
{

    // ui_Screen3

    ui_Screen3 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen3, ui_event_Screen3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Screen3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_Screen3);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, -68);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "WiFi CONNECT");

    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Bar2

    ui_Bar2 = lv_bar_create(ui_Screen3);
    lv_bar_set_range(ui_Bar2, 0, 100);
    lv_bar_set_value(ui_Bar2, 100, LV_ANIM_OFF);

    lv_obj_set_width(ui_Bar2, 215);
    lv_obj_set_height(ui_Bar2, 3);

    lv_obj_set_x(ui_Bar2, 0);
    lv_obj_set_y(ui_Bar2, -53);

    lv_obj_set_align(ui_Bar2, LV_ALIGN_CENTER);

    // ui_TextArea1

    ui_TextArea1 = lv_textarea_create(ui_Screen3);

    lv_obj_set_width(ui_TextArea1, 221);
    lv_obj_set_height(ui_TextArea1, 38);

    lv_obj_set_x(ui_TextArea1, 0);
    lv_obj_set_y(ui_TextArea1, -27);

    lv_obj_set_align(ui_TextArea1, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_TextArea1, NULL);
    else lv_textarea_set_accepted_chars(ui_TextArea1, "");

    lv_textarea_set_text(ui_TextArea1, "");
    lv_textarea_set_placeholder_text(ui_TextArea1, "PASSWORD");
    lv_textarea_set_one_line(ui_TextArea1, true);

    lv_obj_set_style_text_font(ui_TextArea1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_color(ui_TextArea1, lv_color_hex(0xFFFFFF), LV_PART_CURSOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TextArea1, 255, LV_PART_CURSOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_TextArea1, 1, LV_PART_CURSOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_TextArea1, LV_BORDER_SIDE_LEFT, LV_PART_CURSOR | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_TextArea1, lv_color_hex(0x808080), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextArea1, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);

    // ui_Keyboard1

    ui_Keyboard1 = lv_keyboard_create(ui_Screen3);

    lv_obj_set_width(ui_Keyboard1, 316);
    lv_obj_set_height(ui_Keyboard1, 88);

    lv_obj_set_x(ui_Keyboard1, 0);
    lv_obj_set_y(ui_Keyboard1, 40);

    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_Keyboard1, ui_event_Keyboard1, LV_EVENT_ALL, NULL);

    lv_obj_set_style_border_color(ui_Keyboard1, lv_color_hex(0xFFFFFF), LV_PART_ITEMS | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_Keyboard1, 80, LV_PART_ITEMS | LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui_Keyboard1, 1, LV_PART_ITEMS | LV_STATE_FOCUSED);

    // ui_Button3

    ui_Button3 = lv_btn_create(ui_Screen3);

    lv_obj_set_width(ui_Button3, 20);
    lv_obj_set_height(ui_Button3, 20);

    lv_obj_set_x(ui_Button3, -130);
    lv_obj_set_y(ui_Button3, -66);

    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label12

    ui_Label12 = lv_label_create(ui_Button3);

    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, 0);

    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label12, "<");

    // POST CALLS
    lv_keyboard_set_textarea(ui_Keyboard1, ui_TextArea1);

}
void ui_Screen4_screen_init(void)
{

    // ui_Screen4

    ui_Screen4 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen4, ui_event_Screen4, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Screen4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Bar3

    ui_Bar3 = lv_bar_create(ui_Screen4);
    lv_bar_set_range(ui_Bar3, 0, 100);

    lv_obj_set_width(ui_Bar3, 190);
    lv_obj_set_height(ui_Bar3, 3);

    lv_obj_set_x(ui_Bar3, 0);
    lv_obj_set_y(ui_Bar3, -50);

    lv_obj_set_align(ui_Bar3, LV_ALIGN_CENTER);

    lv_obj_set_style_anim_time(ui_Bar3, 2000, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel1

    ui_Panel1 = lv_obj_create(ui_Screen4);

    lv_obj_set_width(ui_Panel1, 270);
    lv_obj_set_height(ui_Panel1, 119);

    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, 18);

    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui_Panel1, 2, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_color(ui_Panel1, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_opa(ui_Panel1, 50, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui_Panel1, 20, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_spread(ui_Panel1, 2, LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_Label7

    ui_Label7 = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_Label7, lv_pct(96));
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, 30);

    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);

    lv_label_set_long_mode(ui_Label7, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_Label7, "#2095f6 IP#       : 	_");
    lv_label_set_recolor(ui_Label7, "true");

    lv_obj_set_style_text_align(ui_Label7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label6

    ui_Label6 = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_Label6, lv_pct(96));
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label6, 0);
    lv_obj_set_y(ui_Label6, 0);

    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);

    lv_label_set_long_mode(ui_Label6, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_Label6, "#2095f6 PWD# : 	_");
    lv_label_set_recolor(ui_Label6, "true");

    lv_obj_set_style_text_align(ui_Label6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_Label5, lv_pct(96));
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, -30);

    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);

    lv_label_set_long_mode(ui_Label5, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_Label5, "#2095f6 SSID#  : 	_");
    lv_label_set_recolor(ui_Label5, "true");

    lv_obj_set_style_text_align(ui_Label5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_Screen4);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, -68);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "WiFi CONNECTING");

    // ui_Button1

    ui_Button1 = lv_btn_create(ui_Screen4);

    lv_obj_set_width(ui_Button1, 20);
    lv_obj_set_height(ui_Button1, 20);

    lv_obj_set_x(ui_Button1, 130);
    lv_obj_set_y(ui_Button1, -66);

    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Button1, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_Button1, 0, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui_Button1, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_Label10

    ui_Label10 = lv_label_create(ui_Button1);

    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label10, 0);
    lv_obj_set_y(ui_Label10, 0);

    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label10, "H");

    // ui_Button2

    ui_Button2 = lv_btn_create(ui_Screen4);

    lv_obj_set_width(ui_Button2, 20);
    lv_obj_set_height(ui_Button2, 20);

    lv_obj_set_x(ui_Button2, -130);
    lv_obj_set_y(ui_Button2, -66);

    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Button2, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_Button2, 0, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui_Button2, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_Label11

    ui_Label11 = lv_label_create(ui_Button2);

    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, 0);

    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label11, "<");

}
void ui_Screen5_screen_init(void)
{

    // ui_Screen5

    ui_Screen5 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen5, ui_event_Screen5, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Screen5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel2

    ui_Panel2 = lv_obj_create(ui_Screen5);

    lv_obj_set_width(ui_Panel2, 279);
    lv_obj_set_height(ui_Panel2, 96);

    lv_obj_set_x(ui_Panel2, 0);
    lv_obj_set_y(ui_Panel2, -2);

    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label14

    ui_Label14 = lv_label_create(ui_Panel2);

    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label14, -28);
    lv_obj_set_y(ui_Label14, 31);

    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label14, "2022 - 4 - 18");

    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Roller1

    ui_Roller1 = lv_roller_create(ui_Panel2);
    lv_roller_set_options(ui_Roller1, "00\n01\n02", LV_ROLLER_MODE_INFINITE);

    lv_obj_set_width(ui_Roller1, 47);
    lv_obj_set_height(ui_Roller1, 34);

    lv_obj_set_x(ui_Roller1, 76);
    lv_obj_set_y(ui_Roller1, -12);

    lv_obj_set_align(ui_Roller1, LV_ALIGN_CENTER);

    lv_obj_set_style_text_font(ui_Roller1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Roller1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Roller1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Roller1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Roller1, lv_color_hex(0x000000), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller1, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    // ui_Label13

    ui_Label13 = lv_label_create(ui_Panel2);

    lv_obj_set_width(ui_Label13, 165);
    lv_obj_set_height(ui_Label13, 52);

    lv_obj_set_x(ui_Label13, -37);
    lv_obj_set_y(ui_Label13, -13);

    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label13, "11 : #2095f6 05");
    lv_label_set_recolor(ui_Label13, "true");

    lv_obj_set_style_text_align(ui_Label13, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label16

    ui_Label16 = lv_label_create(ui_Panel2);

    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label16, 61);
    lv_obj_set_y(ui_Label16, 30);

    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label16, "Sun");

    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label15

    ui_Label15 = lv_label_create(ui_Screen5);

    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label15, 0);
    lv_obj_set_y(ui_Label15, -70);

    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label15, "Good Morning");

    lv_obj_add_flag(ui_Label15, LV_OBJ_FLAG_HIDDEN);

    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label26

    ui_Label26 = lv_label_create(ui_Screen5);

    lv_obj_set_width(ui_Label26, 146);
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label26, -82);
    lv_obj_set_y(ui_Label26, 70);

    lv_obj_set_align(ui_Label26, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label26, "Current: #ff4141 -");
    lv_label_set_recolor(ui_Label26, "true");

    lv_obj_add_flag(ui_Label26, LV_OBJ_FLAG_HIDDEN);

    lv_obj_set_style_text_align(ui_Label26, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label26, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label27

    ui_Label27 = lv_label_create(ui_Screen5);

    lv_obj_set_width(ui_Label27, 163);
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label27, 73);
    lv_obj_set_y(ui_Label27, 70);

    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label27, "Confirmed: #2095f6 -");
    lv_label_set_recolor(ui_Label27, "true");

    lv_obj_add_flag(ui_Label27, LV_OBJ_FLAG_HIDDEN);

    lv_obj_set_style_text_align(ui_Label27, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label27, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Screen6_screen_init(void)
{

    // ui_Screen6

    ui_Screen6 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen6, ui_event_Screen6, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Screen6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label17

    ui_Label17 = lv_label_create(ui_Screen6);

    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label17, -90);
    lv_obj_set_y(ui_Label17, -60);

    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label17, "Virus Data");

    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Dropdown1

    ui_Dropdown1 = lv_dropdown_create(ui_Screen6);
    lv_dropdown_set_options(ui_Dropdown1, "Hebei\nChina\nAbroad");
    lv_dropdown_set_text(ui_Dropdown1, "");

    lv_obj_set_width(ui_Dropdown1, 159);
    lv_obj_set_height(ui_Dropdown1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Dropdown1, 64);
    lv_obj_set_y(ui_Dropdown1, -57);

    lv_obj_set_align(ui_Dropdown1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_add_event_cb(ui_Dropdown1, ui_event_Dropdown1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_Dropdown1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Dropdown1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Dropdown1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_Dropdown1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Dropdown1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_Panel5

    ui_Panel5 = lv_obj_create(ui_Screen6);

    lv_obj_set_width(ui_Panel5, 112);
    lv_obj_set_height(ui_Panel5, 50);

    lv_obj_set_x(ui_Panel5, -72);
    lv_obj_set_y(ui_Panel5, 56);

    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Panel5, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel5, lv_color_hex(0x2ECC71), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel5, LV_BORDER_SIDE_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label22

    ui_Label22 = lv_label_create(ui_Panel5);

    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label22, 0);
    lv_obj_set_y(ui_Label22, -16);

    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label22, "Cured");

    lv_obj_set_style_text_font(ui_Label22, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label23

    ui_Label23 = lv_label_create(ui_Panel5);

    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label23, 0);
    lv_obj_set_y(ui_Label23, 14);

    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label23, "-");

    lv_obj_set_style_text_color(ui_Label23, lv_color_hex(0x2ECC71), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel4

    ui_Panel4 = lv_obj_create(ui_Screen6);

    lv_obj_set_width(ui_Panel4, 112);
    lv_obj_set_height(ui_Panel4, 50);

    lv_obj_set_x(ui_Panel4, 72);
    lv_obj_set_y(ui_Panel4, -3);

    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Panel4, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel4, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel4, LV_BORDER_SIDE_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label20

    ui_Label20 = lv_label_create(ui_Panel4);

    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label20, 0);
    lv_obj_set_y(ui_Label20, -16);

    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);

    lv_label_set_long_mode(ui_Label20, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_Label20, "Confirmed");

    lv_obj_set_style_text_font(ui_Label20, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label21

    ui_Label21 = lv_label_create(ui_Panel4);

    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label21, 0);
    lv_obj_set_y(ui_Label21, 14);

    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label21, "-");

    lv_obj_set_style_text_color(ui_Label21, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel3

    ui_Panel3 = lv_obj_create(ui_Screen6);

    lv_obj_set_width(ui_Panel3, 112);
    lv_obj_set_height(ui_Panel3, 50);

    lv_obj_set_x(ui_Panel3, -72);
    lv_obj_set_y(ui_Panel3, -4);

    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Panel3, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel3, lv_color_hex(0xFF4141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel3, LV_BORDER_SIDE_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label18

    ui_Label18 = lv_label_create(ui_Panel3);

    lv_obj_set_height(ui_Label18, 18);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label18, 0);
    lv_obj_set_y(ui_Label18, -16);

    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);

    lv_label_set_long_mode(ui_Label18, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_Label18, "Current");

    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label19

    ui_Label19 = lv_label_create(ui_Panel3);

    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label19, 0);
    lv_obj_set_y(ui_Label19, 14);

    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label19, "-");

    lv_obj_set_style_text_color(ui_Label19, lv_color_hex(0xE74C3C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel6

    ui_Panel6 = lv_obj_create(ui_Screen6);

    lv_obj_set_width(ui_Panel6, 112);
    lv_obj_set_height(ui_Panel6, 50);

    lv_obj_set_x(ui_Panel6, 72);
    lv_obj_set_y(ui_Panel6, 56);

    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Panel6, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel6, lv_color_hex(0x95A5A6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel6, LV_BORDER_SIDE_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label24

    ui_Label24 = lv_label_create(ui_Panel6);

    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label24, 0);
    lv_obj_set_y(ui_Label24, -16);

    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label24, "Dead");

    lv_obj_set_style_text_font(ui_Label24, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label25

    ui_Label25 = lv_label_create(ui_Panel6);

    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label25, 0);
    lv_obj_set_y(ui_Label25, 14);

    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label25, "-");

    lv_obj_set_style_text_color(ui_Label25, lv_color_hex(0x95A5A6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label25, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen3_screen_init();
    ui_Screen4_screen_init();
    ui_Screen5_screen_init();
    ui_Screen6_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

