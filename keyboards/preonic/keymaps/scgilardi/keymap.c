#include QMK_KEYBOARD_H

/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers {
  _QWERTY,
  _COLEMAK,
  _DVORAK,
  _LOWER,
  _RAISE,
  _ADJUST,
  _NAV,
  _NUM
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  LOWER,
  RAISE,
  NAV,
  NUM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {
   [0] = LAYOUT_preonic_grid(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, RCTL_T(KC_ENT), KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, MO(6), KC_LALT, KC_LGUI, MO(7), MO(3), KC_SPC, KC_SPC, MO(4), MO(7), KC_RGUI, KC_RALT, MO(6)),
   [1] = LAYOUT_preonic_grid(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, RCTL_T(KC_ENT), KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, MO(6), KC_LALT, KC_LGUI, MO(7), MO(3), KC_SPC, KC_SPC, MO(4), MO(7), KC_RGUI, KC_RALT, MO(6)),
   [2] = LAYOUT_preonic_grid(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, RCTL_T(KC_ENT), KC_LSPO, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSPC, MO(6), KC_LALT, KC_LGUI, MO(7), MO(3), KC_SPC, KC_SPC, MO(4), MO(7), KC_RGUI, KC_RALT, MO(6)),
   [3] = LAYOUT_preonic_grid(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SCLN, KC_QUOT, KC_TRNS),
   [4] = LAYOUT_preonic_grid(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SCLN, KC_QUOT, KC_TRNS),
   [5] = LAYOUT_preonic_grid(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, RESET, DEBUG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TERM_ON, TERM_OFF, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MU_MOD, AU_ON, AU_OFF, AG_NORM, AG_SWAP, DF(0), DF(1), DF(2), KC_TRNS, KC_TRNS, KC_TRNS, MUV_DE, MUV_IN, MU_ON, MU_OFF, MI_ON, MI_OFF, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
   [6] = LAYOUT_preonic_grid(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_END, KC_PGDN, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS),
   [7] = LAYOUT_preonic_grid(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PSLS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PAST, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_PPLS)
  };

/*   const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = */
/*   { */
/* /\* Qwerty */
/*  * ,------------------------------------------------------------------------------------. */
/*  * |   `   |  1  |  2  |   3  |   4   |   5  |   6  |   7   |   8  |  9  |  0  |   '    | */
/*  * |-------+-----+-----+------+-------+------+------+-------+------+-----+-----+--------| */
/*  * |  Tab  |  Q  |  W  |   E  |   R   |   T  |   Y  |   U   |   I  |  O  |  P  |  Bksp  | */
/*  * |-------+-----+-----+------+-------+-------------+-------+------+-----+-----+--------| */
/*  * |LC/Esc |  A  |  S  |   D  |   F   |   G  |   H  |   J   |   K  |  L  |  ;  |RC/Enter| */
/*  * |-------+-----+-----+------+-------+------|------+-------+------+-----+-----+--------| */
/*  * | LS/(  |  Z  |  X  |   C  |   V   |   B  |   N  |   M   |   ,  |  .  |  /  |  RS/)  | */
/*  * |-------+-----+-----+------+-------+------+------+-------+------+-----+-----+--------| */
/*  * |  Nav  | Num | Alt | Meta | Lower | Space| Space| Raise | Meta | Alt | Num |  Nav   | */
/*  * `------------------------------------------------------------------------------------' */
/*  *\/ */
/*    [_QWERTY] = LAYOUT_preonic_grid */
/*    (KC_GRV,         KC_1, KC_2,    KC_3,    KC_4,  KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_QUOT, */
/*     KC_TAB,         KC_Q, KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC, */
/*     LCTL_T(KC_ESC), KC_A, KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, RCTL_T(KC_ENT), */
/*     KC_LSPO,        KC_Z, KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, */
/*     NAV,            NUM,  KC_LALT, KC_LGUI, LOWER, KC_SPC, KC_SPC, RAISE, KC_RGUI, KC_RALT, NUM,     NAV), */

/*  /\* Colemak */
/*  * ,------------------------------------------------------------------------------------. */
/*  * |   `   |  1  |  2  |   3  |   4   |   5  |   6  |   7   |   8  |  9  |  0  |   '    | */
/*  * |-------+-----+-----+------+-------+------+------+-------+------+-----+-----+--------| */
/*  * |  Tab  |  Q  |  W  |   F  |   P   |   G  |   J  |   L   |   U  |  Y  |  ;  |  Bksp  | */
/*  * |-------+-----+-----+------+-------+-------------+-------+------+-----+-----+--------| */
/*  * |LC/Esc |  A  |  R  |   S  |   T   |   D  |   H  |   N   |   E  |  I  |  O  |RC/Enter| */
/*  * |-------+-----+-----+------+-------+------|------+-------+------+-----+-----+--------| */
/*  * | LS/(  |  Z  |  X  |   C  |   V   |   B  |   K  |   M   |   ,  |  .  |  /  |  RS/)  | */
/*  * |-------+-----+-----+------+-------+------+------+-------+------+-----+-----+--------| */
/*  * |  Nav  | Num | Alt | Meta | Lower | Space| Space| Raise | Meta | Alt | Num |  Nav   | */
/*  * `------------------------------------------------------------------------------------' */
/*  *\/ */
/*    [_COLEMAK] = LAYOUT_preonic_grid */
/*    (KC_GRV,         KC_1, KC_2,    KC_3,    KC_4,  KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_QUOT, */
/*     KC_TAB,         KC_Q, KC_W,    KC_F,    KC_P,  KC_G,   KC_J,   KC_L,  KC_U,    KC_Y,    KC_SCLN, KC_BSPC, */
/*     LCTL_T(KC_ESC), KC_A, KC_R,    KC_S,    KC_T,  KC_D,   KC_H,   KC_N,  KC_E,    KC_I,    KC_O,    RCTL_T(KC_ENT), */
/*     KC_LSPO,        KC_Z, KC_X,    KC_C,    KC_V,  KC_B,   KC_K,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, */
/*     NAV,            NUM,  KC_LALT, KC_LGUI, LOWER, KC_SPC, KC_SPC, RAISE, KC_RGUI, KC_RALT, NUM,     NAV), */

/* /\* Dvorak */
/*  * ,------------------------------------------------------------------------------------. */
/*  * |   `   |  1  |  2  |   3  |   4   |   5  |   6  |   7   |   8  |  9  |  0  |   '    | */
/*  * |-------+-----+-----+------+-------+------+------+-------+------+-----+-----+--------| */
/*  * |  Tab  |  "  |  ,  |   .  |   P   |   Y  |   F  |   G   |   C  |  R  |  L  |  Bksp  | */
/*  * |-------+-----+-----+------+-------+-------------+-------+------+-----+-----+--------| */
/*  * |LC/Esc |  A  |  O  |   E  |   U   |   I  |   D  |   H   |   T  |  N  |  S  |RC/Enter| */
/*  * |-------+-----+-----+------+-------+------|------+-------+------+-----+-----+--------| */
/*  * | LS/(  |  ;  |  Q  |   J  |   K   |   X  |   B  |   M   |   W  |  V  |  Z  |  RS/)  | */
/*  * |-------+-----+-----+------+-------+------+------+-------+------+-----+-----+--------| */
/*  * |  Nav  | Num | Alt | Meta | Lower | Space| Space| Raise | Meta | Alt | Num |  Nav   | */
/*  * `------------------------------------------------------------------------------------' */
/*  *\/ */
/*    [_DVORAK] = LAYOUT_preonic_grid */
/*    (KC_GRV,         KC_1,    KC_2,    KC_3,    KC_4,  KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0, KC_QUOT, */
/*     KC_TAB,         KC_QUOT, KC_COMM, KC_DOT,  KC_P,  KC_Y,   KC_F,   KC_G,  KC_C,    KC_R,    KC_L, KC_BSPC, */
/*     LCTL_T(KC_ESC), KC_A,    KC_O,    KC_E,    KC_U,  KC_I,   KC_D,   KC_H,  KC_T,    KC_N,    KC_S, RCTL_T(KC_ENT), */
/*     KC_LSPO,        KC_SCLN, KC_Q,    KC_J,    KC_K,  KC_X,   KC_B,   KC_M,  KC_W,    KC_V,    KC_Z, KC_RSPC, */
/*     NAV,            NUM,     KC_LALT, KC_LGUI, LOWER, KC_SPC, KC_SPC, RAISE, KC_RGUI, KC_RALT, NUM,  NAV), */

/* /\* Lower */
/*  * ,----------------------------------------------------------------------------------. */
/*  * |  ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |  "   | */
/*  * |-----+------+------+------+------+-------------+------+------+------+------+------| */
/*  * |  ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |  "   | */
/*  * |-----+------+------+------+------+-------------+------+------+------+------+------| */
/*  * |     |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   | */
/*  * |-----+------+------+------+------+------|------+------+------+------+------+------| */
/*  * |     |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |   <  |   >  |  ?   |      | */
/*  * |-----+------+------+------+------+------+------+------+------+------+------+------| */
/*  * |     |      |      |      |      |      |      |      |      |      |      |      | */
/*  * `----------------------------------------------------------------------------------' */
/*  *\/ */

/*    [_LOWER] = LAYOUT_preonic_grid */
/*    (KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DQUO, */
/*     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DQUO, */
/*     KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, */
/*     KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_LT,   KC_GT,   KC_QUES, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), */

/* /\* Raise */
/*  * ,---------------------------------------------------------------------------------. */
/*  * |  `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  '  | */
/*  * |-----+------+------+------+------+------+------+------+------+------+------+-----| */
/*  * |  `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  '  | */
/*  * |-----+------+------+------+------+-------------+------+------+------+------+-----| */
/*  * |     |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \  | */
/*  * |-----+------+------+------+------+------|------+------+------+------+------+-----| */
/*  * |     |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |   ,  |   .  |   /  |     | */
/*  * |-----+------+------+------+------+------+------+------+------+------+------+-----| */
/*  * |     |      |      |      |      |      |      |      |      |      |      |     | */
/*  * `---------------------------------------------------------------------------------' */
/*  *\/ */

/*    [_RAISE] = LAYOUT_preonic_grid */
/*    (KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_QUOT, */
/*     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_QUOT, */
/*     KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, */
/*     KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), */

/* /\* Adjust (Lower + Raise) */
/*  * ,------------------------------------------------------------------------------------. */
/*  * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9   |  F10 |  F11 |  F12 | */
/*  * |------+------+------+------+------+------+------+------+-------+------+------+------| */
/*  * |      | Reset| Debug|      |      |      |      |TermOn|TermOff|      |      |      | */
/*  * |------+------+------+------+------+-------------+------+-------+------+------+------| */
/*  * |      |      |      |Aud on|AudOff|AGnorm|AGswap|Qwerty|Colemak|Dvorak|      |      | */
/*  * |------+------+------+------+------+------|------+------+-----=-+------+------+------| */
/*  * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |       |      |      |      | */
/*  * |------+------+------+------+------+------+------+------+-------+------+------+------| */
/*  * |      |      |      |      |      |      |      |      |       |      |      |      | */
/*  * `------------------------------------------------------------------------------------' */
/*  *\/ */

/*    [_ADJUST] = LAYOUT_preonic_grid */
/*    (KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12, */
/*     KC_TRNS, RESET,   DEBUG,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TERM_ON, TERM_OFF, KC_TRNS, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK,  DVORAK,  KC_TRNS, KC_TRNS, */
/*     KC_TRNS, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), */

/* /\* Nav */
/*  * ,-------------------------------------------------------------------------------------. */
/*  * |      |      |      |      |      |      |      |      | Ins  | Home | PageUp |      | */
/*  * |------+------+------+------+------+------+------+------+------+------+--------+------| */
/*  * |      |      |      |      |      |      |      |      | Del  | End  | PageDn |      | */
/*  * |------+------+------+------+------+-------------+------+------+------+--------+------| */
/*  * |      |      |      |      |      |      |      |      |      |  Up  |        |      | */
/*  * |------+------+------+------+------+------|------+------+------+------+--------+------| */
/*  * |      |      |      |      |      |      |      |      | Left | Down | Right  |      | */
/*  * |------+------+------+------+------+------+------+------+------+------+--------+------| */
/*  * |      |      |      |      |      |      |      |      |      |      |        |      | */
/*  * `-------------------------------------------------------------------------------------' */
/*  *\/ */

/*    [_NAV] = LAYOUT_preonic_grid */
/*    (KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_HOME, KC_PGUP, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_END, KC_PGDN, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), */

/* /\* Num */
/*  * ,------------------------------------------------------------------------------------. */
/*  * |      |      |      |      |      |      |      |  7   |   8  |   9  |  /   |       | */
/*  * |------+------+------+------+------+------+------+------+------+------+------+-------| */
/*  * |      |      |      |      |      |      |      |  4   |   5  |   6  |  *   |       | */
/*  * |------+------+------+------+------+-------------+------+------+------+------+-------| */
/*  * |      |      |      |      |      |      |      |  1   |   2  |   3  |  -   |       | */
/*  * |------+------+------+------+------+------|------+------+------+------+------+-------| */
/*  * |      |      |      |      |      |      |      |  0   |   .  |      |  +   |       | */
/*  * |------+------+------+------+------+------+------+------+------+------+------+-------| */
/*  * |      |      |      |      |      |      |      |      |      |      |      |       | */
/*  * `------------------------------------------------------------------------------------' */
/*  *\/ */

/*    [_NUM] = LAYOUT_preonic_grid */
/*    (KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PMNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0,   KC_PDOT, KC_TRNS, KC_PPLS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS) */
/*   }; */


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
      }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
}

void dip_update(uint8_t index, bool active) {
  switch (index) {
    case 0:
      if (active) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      break;
    case 1:
      if (active) {
        muse_mode = true;
      } else {
        muse_mode = false;
        #ifdef AUDIO_ENABLE
          stop_all_notes();
        #endif
      }
   }
}

void matrix_scan_user(void) {
  #ifdef AUDIO_ENABLE
    if (muse_mode) {
      if (muse_counter == 0) {
        uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
        if (muse_note != last_muse_note) {
          stop_note(compute_freq_for_midi_note(last_muse_note));
          play_note(compute_freq_for_midi_note(muse_note), 0xF);
          last_muse_note = muse_note;
        }
      }
      muse_counter = (muse_counter + 1) % muse_tempo;
    }
  #endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
