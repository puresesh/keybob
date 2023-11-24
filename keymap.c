// Copyright 2023 QMKcbaaaacbaaaaaaaabcaaaaaaaaaacbaabcabcabcabcabccba
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_test_4x6(
	KC_A,   KC_B,   KC_C,   KC_D,   KC_E,   KC_F, 	KC_F, KC_E, KC_S, KC_B, KC_B, KC_B,
	KC_G,   KC_H,   KC_I,   KC_J,   KC_K,   KC_L, 	KC_B, KC_B, KC_B, KC_B, KC_B, KC_B,
	KC_M,   KC_N,   KC_O,   KC_P,   KC_Q,   KC_R, 	KC_B, KC_B, KC_B, KC_B, KC_B, KC_B,
	KC_S,   KC_T,   KC_U,   KC_V,   KC_W,   KC_X, 	KC_B, KC_B, KC_B, KC_F, KC_E, KC_H
    )
};
