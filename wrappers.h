#pragma once

// QWERTY
#define BASE \
KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
KC_DEL,  KC_LALT, KC_LCTL, KC_LGUI, MO(1),   KC_SPC,  KC_SPC,  MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT

// Lower
#define LOWER \
_______, _______, _______, KC_LPRN, KC_RPRN, _______, _______, KC_MINS, KC_EQL,  KC_BSLS, _______, _______, \
_______, _______, _______, KC_LCBR, KC_RCBR, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, \
KC_CAPS, _______, _______, KC_LBRC, KC_RBRC, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, MO(3),   KC_HOME, KC_PGDN, KC_PGUP, KC_END

// Raise
#define RAISE \
KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, MO(3),   _______, _______, _______, _______, _______, _______, _______

// Adjust
#define ADJUST \
RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
_______, KC_F11,  KC_F12,  _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, \
_______, _______, _______, _______, _______, _______, _______, KC_INS,  KC_DEL,  _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ 

#define LAYOUT_wrapper_ortho_4x12(...) LAYOUT_ortho_4x12(__VA_ARGS__)