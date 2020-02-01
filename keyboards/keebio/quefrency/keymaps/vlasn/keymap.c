#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layer_names {
  _BASE,
  _MOD
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define VOLUP KC_AUDIO_VOL_UP
#define VOLDOWN KC_AUDIO_VOL_DOWN
#define TRKNEXT KC_MEDIA_NEXT_TRACK
#define TRKPREV KC_MEDIA_NEXT_TRACK
#define PLAY KC_MEDIA_PLAY_PAUSE
#define SCREEN KC_PSCREEN
#define SHFT_SLS MT(MOD_LSFT, KC_SLSH)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,        KC_7,    KC_8,    KC_9,     KC_0,     KC_MINS, KC_EQL,  _______, KC_BSPC, 
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 
    KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,     KC_K,     KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                          KC_N,    KC_M,     KC_COMM,  KC_DOT, SHFT_SLS, KC_UP,   KC_RSFT, 
    MO(_MOD),KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,                                 KC_SPC,  _______,  KC_LGUI,  KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_MOD] = LAYOUT(
    KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL, \
    RGB_TOG, RGB_RMOD,RGB_MOD, _______, _______, _______,               _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_CAPS, RGB_VAI , _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, SCREEN,\
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, VOLUP,   PLAY, \
    KC_TILD, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,                                  _______, _______, _______, _______, TRKPREV, VOLDOWN, TRKNEXT
  )
};
