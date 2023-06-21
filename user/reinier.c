/*

# Qweighteen, a keymap with full QWERTY layout but with a focus on the eighteen most comfortable keys on the other layers. 

Inspired by the sixteen/eighteen key keyboard of [Ben Vallack](https://www.youtube.com/@BenVallack)

@TODO re-order layers so symbols layers are 1 and 2 instead of 1 and 4
*/
#pragma once

#include QMK_KEYBOARD_H

#include "features/layer_lock.h"
#include "microhacks.c"

/*

## COMBOS

*/

enum combos {
	CBO_0,
	CBO_1,
	COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo0[] = { KC_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_CCCV, KC_UP, COMBO_END};

combo_t key_combos[] = {
	[CBO_0] = COMBO(combo0, KC_BTN1),
	[CBO_1] = COMBO(combo1, KC_BTN2),
};

// Helpers

#define QW18_NO_ROW KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#define QW18_NOBASE_RT KC_TRNS, LLOCK, KC_TRNS
#define K18_NOBASE_RT KC_TRNS, LLOCK

// # BASE LAYER

#define QW18_BASE_L1    KC_Q, LCTL_T(KC_W), LALT_T(KC_E), LSFT_T(KC_R), KC_T
#define QW18_BASE_R1    KC_Y, RGUI_T(KC_U), RALT_T(KC_I), RCTL_T(KC_O), KC_BSPC
#define QW18_BASE_L2    LT(3,KC_A), LT(2,KC_S), LT(1,KC_D), LT(4,KC_F), LSFT_T(KC_G)
#define QW18_BASE_R2    KC_H, LT(4,KC_J), LT(1,KC_K), LT(2,KC_L), LT(3,KC_P)
#define QW18_BASE_L3    KC_Z, KC_X, KC_C, KC_V, KC_B
#define QW18_BASE_R3    KC_N, KC_M, KC_COMM, KC_DOT, KC_SLASH
#define QW18_BASE_LT    KC_CCCV, OSM(MOD_LGUI), MEH_T(KC_SPACE)
#define QW18_BASE_RT    OSM(MOD_LSFT), KC_F19, CW_TOGG

// # 18KEY setup non-base layers

// ###### Layer 1 Symbols I

#define K18_SYM1_L1 KC_NO, A(KC_2), KC_NO
#define K18_SYM1_R1 KC_NO, KC_CIRC, S(KC_SLASH)
#define K18_SYM1_L2 KC_NO, S(KC_F19), KC_GRAVE, KC_DQUO
#define K18_SYM1_R2 KC_HASH, KC_AT, KC_EXLM, A(KC_SCLN)
#define K18_SYM1_LT KC_TRNS, KC_QUOT
#define K18_SYM1_RT K18_NOBASE_RT

// ###### Layer 2 Symbols II

#define K18_SYM2_L1 KC_TILD, KC_BSLS, KC_PIPE
#define K18_SYM2_R1 KC_RPRN, KC_RBRC, KC_RCBR
#define K18_SYM2_L2 KC_UNDS, KC_DLR, KC_SLASH, KC_PERC
#define K18_SYM2_R2 KC_LPRN, KC_LBRC, KC_LCBR, KC_SCLN
#define K18_SYM2_LT KC_TRNS, KC_AMPR
#define K18_SYM2_RT K18_NOBASE_RT

// ##### Layer 3 NUM

#define K18_NUM_L1 KC_PLUS, KC_5, KC_6
#define K18_NUM_R1 KC_7, KC_8, KC_9
#define K18_NUM_L2 KC_ASTR, KC_MINUS, KC_0, KC_1
#define K18_NUM_R2 KC_2, KC_3, KC_4, KC_PEQL
#define K18_NUM_LT KC_TRNS, KC_COLN
#define K18_NUM_RT K18_NOBASE_RT

// ##### Layer 4 EXTENDED

#define K18_EXT_L1 KC_ESC, KC_PGUP, KC_F18
#define K18_EXT_R1 KC_CCCV, KC_UP, KC_BSPC
#define K18_EXT_L2 KC_TAB, LCTL_T(KC_DELETE), LALT_T(KC_PGDN), CW_TOGG
#define K18_EXT_R2 KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENTER
#define K18_EXT_LT KC_TRNS, KC_SPACE
#define K18_EXT_RT K18_NOBASE_RT

// #
// #
// #

// ###### Layer 1 Symbols I

#define QW18_SYM1_L1 KC_NO, K18_SYM1_L1, KC_NO
#define QW18_SYM1_R1 KC_NO, K18_SYM1_R1, KC_NO
#define QW18_SYM1_L2 K18_SYM1_L2, KC_NO
#define QW18_SYM1_R2 KC_NO, K18_SYM1_R2
#define QW18_SYM1_L3 QW18_NO_ROW
#define QW18_SYM1_R3 QW18_NO_ROW
#define QW18_SYM1_LT KC_TRNS, K18_SYM1_LT
#define QW18_SYM1_RT QW18_NOBASE_RT

// ###### Layer 2 Symbols II

#define QW18_SYM2_L1 KC_NO, K18_SYM2_L1, KC_NO
#define QW18_SYM2_R1 KC_NO, K18_SYM2_R1, KC_NO
#define QW18_SYM2_L2 K18_SYM2_L2, KC_NO
#define QW18_SYM2_R2 KC_NO, K18_SYM2_R2
#define QW18_SYM2_L3 QW18_NO_ROW
#define QW18_SYM2_R3 QW18_NO_ROW
#define QW18_SYM2_LT KC_TRNS, K18_SYM2_LT
#define QW18_SYM2_RT QW18_NOBASE_RT

// ##### Layer 3 NUM

#define QW18_NUM_L1 KC_NO, K18_NUM_L1, KC_NO
#define QW18_NUM_R1 KC_NO, K18_NUM_R1, KC_NO
#define QW18_NUM_L2 K18_NUM_L2, KC_NO
#define QW18_NUM_R2 KC_NO, K18_NUM_R2
#define QW18_NUM_L3 QW18_NO_ROW
#define QW18_NUM_R3 QW18_NO_ROW
#define QW18_NUM_LT KC_TRNS, K18_NUM_LT
#define QW18_NUM_RT QW18_NOBASE_RT

// ##### Layer 4 EXTENDED

#define QW18_EXT_L1 KC_NO, K18_EXT_L1, KC_NO
#define QW18_EXT_R1 KC_NO, K18_EXT_R1, KC_NO
#define QW18_EXT_L2 K18_EXT_L2, KC_NO
#define QW18_EXT_R2 KC_NO, K18_EXT_R2
#define QW18_EXT_L3 QW18_NO_ROW
#define QW18_EXT_R3 QW18_NO_ROW
#define QW18_EXT_LT KC_TRNS, K18_EXT_LT
#define QW18_EXT_RT QW18_NOBASE_RT
