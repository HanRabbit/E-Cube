#include <Arduino.h>
// #include <MD_UISwitch.h>
#include <TFT_eSPI.h>
#include <lvgl.h>

/* 用户引用 */
#include "ui.c"
#include "ui_helpers.c"

#define PIN_UP 26
#define PIN_DOWN 27
#define PIN_ENTER 25

static const uint16_t screenWidth = 320;
static const uint16_t screenHeight = 230;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

TFT_eSPI tft = TFT_eSPI();

lv_indev_drv_t indev_drv;
lv_group_t *ui_group;

// MD_UISwitch_Digital keyUp(PIN_UP);
// MD_UISwitch_Digital keyDown(PIN_DOWN, (uint8_t)LOW);

uint8_t Key_Scan() {
  if (digitalRead(PIN_ENTER) == LOW) {
    // Serial.println("[Navigation] click");
    return 1;
  }
  // MD_UISwitch::keyResult_t k_u = keyUp.read();
  // MD_UISwitch::keyResult_t k_d = keyDown.read();

  if (digitalRead(PIN_UP) == LOW) {
    // Serial.println("[Navigation] prev");
    return 2;
  }
  else if (digitalRead(PIN_DOWN) == LOW) {
    // Serial.println("[Navigation] next");
    return 3;
  }

  return 0; // 没按下返回0
}

// 按键状态更新函数
static void my_key_read(lv_indev_drv_t* indev_driver, lv_indev_data_t* data) {
  static uint32_t last_key = 0;
  uint8_t act_enc = Key_Scan();

  if (act_enc != 0) {
    switch (act_enc) {
    case 1:
      act_enc = LV_KEY_ENTER;
      data->state = LV_INDEV_STATE_PRESSED;
      break;
    case 2:
      act_enc = LV_KEY_RIGHT;
      data->state = LV_INDEV_STATE_PRESSED;
      // data->enc_diff++;
      break;
    case 3:
      act_enc = LV_KEY_LEFT;
      data->state = LV_INDEV_STATE_PRESSED;
      // data->enc_diff--;
      break;
    }
    last_key = (uint32_t)act_enc;
  }
  data->key = last_key;
}

// 按键初始化
static void my_key_init() {
  // keyUp.enableDoublePress(false);   // 是否允许双击
  // keyUp.enableLongPress(false);     // 是否允许长按
  // keyDown.enableDoublePress(false); // 是否允许双击
  // keyDown.enableLongPress(false);   // 是否允许长按
  pinMode(PIN_ENTER, INPUT);
  pinMode(PIN_UP, INPUT_PULLUP);
  pinMode(PIN_DOWN, INPUT_PULLUP);
}

// 输入设备初始化
void lv_port_indev_init() {
  // 初识化按键
  my_key_init();
  // 注册输入设备
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_ENCODER;
  indev_drv.read_cb = my_key_read;
  lv_indev_drv_register(&indev_drv);

  ui_group = lv_group_create();
  lv_group_set_default(ui_group);
  lv_group_remove_all_objs(ui_group);

  /* 添加控制组件 */
  // lv_group_add_obj(group, ui_Switch1);
  // lv_group_add_obj(group, ui_TextArea1);
  lv_group_add_obj(ui_group, ui_Roller2);
  lv_group_add_obj(ui_group, ui_Button4);
  lv_group_add_obj(ui_group, ui_Keyboard1);
  lv_group_add_obj(ui_group, ui_Panel1);
  lv_group_add_obj(ui_group, ui_Button2);
  lv_group_add_obj(ui_group, ui_Panel2);

  lv_indev_set_group(lv_indev_drv_register(&indev_drv), ui_group);
}

/* Display flushing */
void my_disp_flush(lv_disp_drv_t* disp, const lv_area_t* area,
  lv_color_t* color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors((uint16_t*)&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

void setup() {
  Serial.begin(115200);
  pinMode(0, INPUT);
  lv_init();

  tft.begin();        /* TFT init */
  /* 设置显示方向 */
  tft.setRotation(3);

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);

  /* 显示屏初始化 */
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /* Change the following line to your display resolution */
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  /* UI界面初始化 */
  ui_init();

  /* 按键驱动初始化 */
  lv_port_indev_init();
}

void loop() {
  lv_task_handler();
  // lv_tick_inc(portTICK_PERIOD_MS);
}