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
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┴───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ SPACE │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───────┴───┴───┴───┴───┴───┘
     */
    
    [BASE] = LAYOUT_bart_4x13(
        KC_DOT,    KC_J,    KC_I,    KC_Y,    KC_COMM,    KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L
    ),
    [NUM] = LAYOUT_bart_4x13(
        KC_DOT,    KC_J,    KC_I,    KC_Y,    KC_COMM,    KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L
    ),
    [SYM] = LAYOUT_bart_4x13(
        KC_DOT,    KC_J,    KC_I,    KC_Y,    KC_COMM,    KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L
    ),
    [FN] = LAYOUT_bart_4x13(
        KC_DOT,    KC_J,    KC_I,    KC_Y,    KC_COMM,    KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L
    ),
    [QWERTY] = LAYOUT_bart_4x13(
        KC_DOT,    KC_J,    KC_I,    KC_Y,    KC_COMM,    KC_W,    KC_L,    KC_C,    KC_U,    KC_F,    KC_CAPS,    KC_BSPC,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_SPACE     ,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L
    )


};
