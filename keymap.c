#include QMK_KEYBOARD_H

//#include "keymap_steno.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
	_BASE,
	_1,
  _2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_ortho_5x12(
  KC_ESC,                  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,       KC_7,    KC_8,    KC_9,   KC_0,    KC_BSPC,\
  KC_TAB,                  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,       KC_U,    KC_I,    KC_O,   KC_P,    KC_BSLS,\
  KC_LSFT,                 KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,       KC_J,    KC_K,    KC_L,   KC_SCLN, KC_ENT,\
  KC_LCTL,                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,       KC_M,    KC_COMM, KC_DOT, KC_QUES, KC_QUOT,\
                 	   	     KC_LWIN, KC_GRV,  MO(_1),  KC_SPC,  MO(_2),                       KC_EQL, KC_PPLS, KC_MINS, KC_PAST, KC_PSLS\
),

[_1] = LAYOUT_ortho_5x12(
  XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX,\
  XXXXXXX,                 XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_LSFT,                 KC_LEFT, KC_DOWN, KC_RIGHT,XXXXXXX, XXXXXXX,                      XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_LCTL,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
                 	   	     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_MS_BTN1, KC_MS_BTN2, KC_PGUP, KC_PGDN\
),

[_2] = LAYOUT_ortho_5x12(
  KC_F1,                   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,      KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,\
  XXXXXXX,                 XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_LSFT,                 KC_LEFT, KC_DOWN, KC_RIGHT,XXXXXXX, XXXXXXX,                      XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_LCTL,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
                 	   	     XXXXXXX, KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_BTN1, KC_BTN2, KC_VOLU, KC_VOLD\
)

};