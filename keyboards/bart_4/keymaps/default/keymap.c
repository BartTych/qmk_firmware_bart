// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers{
    BASE,
    NUM,
    SYM,
    FN,
    QWERTY,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    
    BASE
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ESC│ . │ J │ I │ Y │ , │ W │ L │ C │ U │ F │CAP│BAC│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │TAB│ A │ O │ E │ R │ P │ D │ H │ T │ N │ S │SHI│ENT│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │SHI│ ; │ X │ Q │ K │ ' │ B │ M │ G │ V │ Z │UP │QWR│
     * ├───┼───┼───┼───┼───┼───┴───┼───┼───┼───┼───┼───┼───┤
     * │CTR│ALT│COM│COM│NUM│ SPACE │SYM│SYM│FUN│LEF│DOW│RIG│
     * └───┴───┴───┴───┴───┴───────┴───┴───┴───┴───┴───┴───┘
     
    NUM
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ESC│   │ { │ } │ - │   │   │ 7 │ 8 │ 9 │ ^ │ \ │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │TAB│ _ │ [ │ ( │ ) │ + │ * │ 4 │ 5 │ 6 │ = │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │SHI│ : │ ] │ ! │ # │ < │ > │ 1 │ 2 │ 3 │ / │UP │   │
     * ├───┼───┼───┼───┼───┼───┴───┼───┼───┼───┼───┼───┼───┤
     * │CTR│ALT│COM│COM│NUM│   0   │ 0 │   │   │LEF│DOW│RIG│
     * └───┴───┴───┴───┴───┴───────┴───┴───┴───┴───┴───┴───┘
    
    SYM
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │   │   │   │ ~ │   │   │   │ ! │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │ @ │ % │ ? │ # │   │   │ _ │ & │ | │ = │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │ : │   │   │ $ │   │   │   │   │   │   │UP │   │
     * ├───┼───┼───┼───┼───┼───┴───┼───┼───┼───┼───┼───┼───┤
     * │CTR│ALT│COM│COM│NUM│ SPACE │   │   │   │LEF│DOW│RIG│
     * └───┴───┴───┴───┴───┴───────┴───┴───┴───┴───┴───┴───┘
     
    FN
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │   │   │   │   │   │   │   │F7 │F8 │F9 │F10│F11│F12│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │F4 │F5 │F6 │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │F1 │F2 │F3 │   │   │   │
     * ├───┼───┼───┼───┼───┼───┴───┼───┼───┼───┼───┼───┼───┤
     * │CTR│ALT│COM│COM│NUM│ SPACE │   │   │   │   │   │   │
     * └───┴───┴───┴───┴───┴───────┴───┴───┴───┴───┴───┴───┘
    
    QWERTY
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ESQ│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │F11│F12│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │TAB│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │SHI│ENT│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │SHI│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │UP │   │
     * ├───┼───┼───┼───┼───┼───┴───┼───┼───┼───┼───┼───┼───┤
     * │CTR│ALT│COM│COM│NUM│ SPACE │SYM│SYM│FN │LEF│DOW│RIG│
     * └───┴───┴───┴───┴───┴───────┴───┴───┴───┴───┴───┴───┘


     */
    
    [BASE] = LAYOUT(
        KC_ESC,  KC_DOT, KC_J,    KC_I,    KC_Y,  KC_COMM,   KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_TAB,KC_A,    KC_O,    KC_E,    KC_R,    KC_P,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_K,    KC_ENT,
        KC_LSFT, KC_SCLN ,KC_B,    KC_C,    KC_D,    KC_A,    KC_B,    KC_M,    KC_G,    KC_V,    KC_Z,    KC_UP,    KC_L,
        KC_A,KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_LEFT,    KC_DOWN,    KC_RGHT
    ),
    [NUM] = LAYOUT(
        KC_ESC,  KC_DOT, KC_J,    KC_I,    KC_Y,  KC_COMM,   KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_TAB,KC_A,    KC_O,    KC_E,    KC_R,    KC_P,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_K,    KC_ENT,
        KC_LSFT, KC_SCLN ,KC_B,    KC_C,    KC_D,    KC_A,    KC_B,    KC_M,    KC_G,    KC_V,    KC_Z,    KC_UP,    KC_L,
        KC_A,KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_LEFT,    KC_DOWN,    KC_RGHT
    ),
    [SYM] = LAYOUT(
        KC_ESC,  KC_DOT, KC_J,    KC_I,    KC_Y,  KC_COMM,   KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_TAB,KC_A,    KC_O,    KC_E,    KC_R,    KC_P,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_K,    KC_ENT,
        KC_LSFT, KC_SCLN ,KC_B,    KC_C,    KC_D,    KC_A,    KC_B,    KC_M,    KC_G,    KC_V,    KC_Z,    KC_UP,    KC_L,
        KC_A,KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_LEFT,    KC_DOWN,    KC_RGHT
    ),
    [FN] = LAYOUT(
        KC_ESC,  KC_DOT, KC_J,    KC_I,    KC_Y,  KC_COMM,   KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_TAB,KC_A,    KC_O,    KC_E,    KC_R,    KC_P,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_K,    KC_ENT,
        KC_LSFT, KC_SCLN ,KC_B,    KC_C,    KC_D,    KC_A,    KC_B,    KC_M,    KC_G,    KC_V,    KC_Z,    KC_UP,    KC_L,
        KC_A,KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_LEFT,    KC_DOWN,    KC_RGHT
    ),
    [QWERTY] = LAYOUT(
        KC_ESC,  KC_DOT, KC_J,    KC_I,    KC_Y,  KC_COMM,   KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_TAB,KC_A,    KC_O,    KC_E,    KC_R,    KC_P,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_K,    KC_ENT,
        KC_LSFT, KC_SCLN ,KC_B,    KC_C,    KC_D,    KC_A,    KC_B,    KC_M,    KC_G,    KC_V,    KC_Z,    KC_UP,    KC_L,
        KC_A,KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_LEFT,    KC_DOWN,    KC_RGHT
    )


};
