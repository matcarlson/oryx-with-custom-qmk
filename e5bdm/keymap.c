#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_steno.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ORYX_SL_TOGG,
  HSV_0_255_255,
  HSV_86_255_128,
  HSV_172_255_255,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           DM_PLY1,                                        DM_PLY2,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           MO(4),                                          MO(4),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_BSPC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_HYPR,                                                                        KC_MEH,         KC_H,           KC_J,           KC_K,           KC_L,           LT(2, KC_SCLN), MT(MOD_LGUI, KC_QUOTE),
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RCTL, KC_SLASH),KC_RIGHT_SHIFT, 
    LT(1, KC_GRAVE),KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT,        KC_RIGHT,       MT(MOD_LCTL, KC_ESCAPE),                                                                                                KC_BSPC,        KC_UP,          KC_DOWN,        KC_LBRC,        KC_RBRC,        MO(1),          
    KC_SPACE,       KC_ENTER,       MT(MOD_LALT, KC_APPLICATION),                KC_TAB,         KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_PSCR,                                                                        KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       HSV_0_255_255,  HSV_86_255_128, HSV_172_255_255,RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [2] = LAYOUT_moonlander(
    AU_TOGG,        TD(DANCE_0),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    MU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ORYX_SL_TOGG,   
    MU_NEXT,        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_STENO_BOLT,                                  QK_STENO_GEMINI,STN_FN,         STN_RES1,       STN_RES2,       KC_TRANSPARENT, KC_TRANSPARENT, STN_PWR,        
    KC_TRANSPARENT, STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,         KC_TRANSPARENT,                                 KC_TRANSPARENT, STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,         
    KC_TRANSPARENT, STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,         
    KC_TRANSPARENT, STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                        STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, STN_NC,         STN_NC,                                                                                                         STN_NC,         STN_NC,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, STN_PWR,        
    STN_A,          STN_O,          KC_TRANSPARENT,                 KC_TRANSPARENT, STN_E,          STN_U
  ),
  [4] = LAYOUT_moonlander(
    TO(0),          TO(1),          TO(2),          TO(3),          TG(6),          KC_TRANSPARENT, DM_REC1,                                        DM_REC2,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,         DM_RSTP,                                                                                                        KC_TRANSPARENT, KC_PAGE_UP,     KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, CM_TOGG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_CTRL,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_GUI,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_GUI,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_HYPR, KC_RIGHT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_AT),
    COMBO(combo1, LGUI(KC_F20)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,245,245}, {0,245,245}, {131,255,255}, {25,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {78,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {239,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {211,255,163}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {211,255,163}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {211,255,163}, {0,0,0}, {211,255,163}, {176,255,255}, {86,255,255}, {239,255,255}, {42,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {131,255,255}, {25,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {211,255,163}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {211,255,163}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,167}, {0,0,0}, {211,255,163}, {176,255,255}, {74,255,255}, {42,255,255}, {0,245,245} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,255}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,255}, {42,255,255}, {42,255,255}, {42,255,255}, {42,255,255}, {176,255,255}, {42,255,255}, {42,255,255}, {42,255,255}, {78,255,255}, {176,255,255}, {42,255,255}, {42,255,255}, {42,255,255}, {0,0,0}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,228}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {176,255,228}, {211,255,163}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,105}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,121}, {0,0,121}, {0,0,121}, {0,0,121}, {0,0,121}, {0,0,121}, {78,255,255}, {0,0,255}, {0,0,255}, {0,0,121}, {0,0,121}, {78,255,255}, {0,0,255}, {0,0,255}, {0,0,121}, {0,0,121}, {78,255,255}, {0,0,255}, {0,0,255}, {0,0,121}, {0,0,121}, {78,255,255}, {0,0,255}, {0,0,255}, {176,255,228}, {0,0,121}, {78,255,255}, {211,255,163}, {211,255,163}, {0,255,255}, {0,0,121}, {0,0,121}, {0,0,255}, {0,0,255}, {0,0,121}, {176,255,255}, {42,255,255}, {176,255,228}, {0,0,255}, {0,0,255}, {42,255,255}, {0,0,121}, {176,255,255}, {0,0,255}, {0,0,255}, {0,0,121}, {0,0,121}, {78,255,255}, {0,0,255}, {0,0,255}, {0,0,121}, {42,255,255}, {78,255,255}, {0,0,255}, {0,0,255}, {0,0,121}, {42,255,255}, {78,255,255}, {0,0,121}, {0,0,255}, {176,255,255}, {42,255,255}, {78,255,255}, {211,255,163}, {211,255,163}, {0,255,255}, {0,0,121}, {0,0,121}, {0,0,255}, {0,0,255}, {0,0,121}, {176,255,255} },

    [4] = { {176,255,255}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {176,255,255}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {176,255,255}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {176,255,255}, {0,0,138}, {0,0,138}, {0,0,138}, {78,255,255}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,255,255}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,255,255}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {78,255,255}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138}, {0,0,138} },

    [5] = { {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204}, {125,218,204} },

    [6] = { {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,255}, {0,218,204}, {0,0,255}, {0,0,255}, {81,255,255}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,255}, {125,250,255}, {125,250,255}, {125,250,255}, {125,250,255}, {125,250,255}, {0,0,255}, {125,250,255}, {0,0,255}, {0,0,255}, {0,0,255}, {125,250,255}, {125,250,255}, {125,250,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {81,255,255}, {0,0,255}, {0,0,255}, {81,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,218,204}, {0,0,255}, {0,218,204}, {0,0,255}, {0,218,204}, {0,0,255}, {0,0,255}, {0,0,255}, {0,218,204}, {0,0,255}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_LANGUAGE_8) SS_TAP(X_F5) ));
    }
    break;
    case ORYX_SL_TOGG:
      if (record->event.pressed) {
        wait_ms(10);
        toggle_smart_layer();
      }
      break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_86_255_128:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(86,255,128);
        }
        return false;
    case HSV_172_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(172,255,255);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: register_code16(KC_ESCAPE); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
};
