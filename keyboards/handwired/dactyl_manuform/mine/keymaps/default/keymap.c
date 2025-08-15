#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

// Base layer only
enum layers {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
    // Row 0
    SE_Q,    SE_W,    SE_E,    SE_R,    SE_T,    SE_Y,           SE_U,    SE_I,    SE_O,    SE_P,    SE_ARNG, SE_LABK,
    // Row 1
    SE_A,    SE_S,    SE_D,    SE_F,    SE_G,    SE_H,           SE_J,    SE_K,    SE_L,    SE_ODIA, SE_ADIA, SE_QUOT,
    // Row 2
    SE_Z,    SE_X,    SE_C,    SE_V,    SE_B,    SE_N,           SE_M,    SE_COMM, SE_DOT,  SE_MINS, SE_SLSH, SE_EQL,
    // Thumbs
             KC_LCTL, KC_LGUI, KC_SPC,  KC_BSPC, KC_ENT,         KC_TAB,  KC_LALT, KC_RGUI, KC_RCTL, KC_ESC
)
};
