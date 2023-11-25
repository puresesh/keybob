// Copyright 2023 QMKcbaaaacbaaaaaaaabcaaaaaaaaaacbaabcabcabcabcabccba
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ X │ C
     * ├───┼───┼───┼───┤ 
     * │ 4 │ 5 │ X │ * │ C
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */		
    [0] = LAYOUT_test_4x6(
	KC_TAB,   	KC_Q,   KC_W,   KC_E,   KC_R,   KC_T, 		KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BACKSPACE,
	KC_LEFT_SHIFT,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G, 		KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_B,
	KC_LEFT_CTRL,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B, 		KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_ESCAPE,
	KC_NO, KC_NO, KC_NO,  KC_LEFT_GUI,   KC_SPACE,   MO(1), 	KC_ENTER, MO(2), KC_B, KC_F, KC_E, KC_H
    ),
    [1] = LAYOUT_test_4x6(
	KC_TAB,   	KC_1,   KC_2,   KC_3,   KC_4,   KC_5, 		KC_6, KC_7, KC_8, KC_9, KC_0, KC_BACKSPACE,
	KC_LEFT_SHIFT,  KC_EXCLAIM,   KC_AT,   KC_HASH,   KC_DOLLAR,    KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_BACKSPACE,
	KC_LEFT_CTRL,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B, 		KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_ESCAPE,
	KC_NO, KC_NO, KC_NO,  KC_LEFT_GUI,   KC_SPACE,   KC_NO, 	KC_ENTER, KC_NO, KC_B, KC_F, KC_E, KC_H
    ),
    [2] = LAYOUT_test_4x6(
	KC_TAB,   	KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, 	KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_BACKSPACE,
	KC_LEFT_SHIFT,  KC_F11,   KC_F12,   KC_NO,   KC_NO,   KC_NO,    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO, KC_NO,
	KC_LEFT_CTRL,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B, 		KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_ESCAPE,
	KC_NO, KC_NO, KC_NO,  KC_LEFT_GUI,   KC_SPACE,   MO(1), 	KC_ENTER, KC_NO, KC_B, KC_F, KC_E, KC_H
    ),

};
