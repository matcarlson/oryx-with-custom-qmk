/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef IGNORE_MOD_TAP_INTERRUPT
#define QUICK_TAP_TERM 0

#define COMBO_TERM 60

#define USB_SUSPEND_WAKEUP_DELAY 20
#define CAPS_LOCK_STATUS
#define FIRMWARE_VERSION u8"O4lyr/N0KBA"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 2

#define RGB_MATRIX_STARTUP_SPD 60

