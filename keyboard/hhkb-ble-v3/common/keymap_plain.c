/*
Copyright (C) 2018,2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,    FN0, RSFT, \
        TRNS,LALT,LGUI,          SPC,                GRV, RGUI,RALT,TRNS,TRNS),
    /* 1: Poker Fn */
    KEYMAP_ANSI(
        FN1, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,TRNS, DEL,  \
        TRNS,VOLD,VOLU,MUTE,EJCT,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,   TRNS, \
        FN2,TRNS, FN3,TRNS,TRNS,TRNS,PPLS,PMNS,END,PGDN,DOWN,     TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,               DEL,TRNS,TRNS,TRNS,TRNS),
};
const action_t fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    ACTION_FUNCTION(KEYBOARD_CONTROL), // sleep
    ACTION_FUNCTION(SWITCH_DEVICE), // switch between usb and ble
};


/* const action_t fn_actions[] = {
    ACTION_MODS_TAP_KEY(MOD_RSFT,KC_UP),
    ACTION_MODS_TAP_KEY(MOD_RALT, KC_DOWN),
    ACTION_MODS_TAP_KEY(MOD_RGUI, KC_LEFT),
    ACTION_LAYER_TAP(1, KC_RGHT),

    ACTION_FUNCTION(KEYBOARD_CONTROL), // sleep
    ACTION_FUNCTION(SWITCH_DEVICE), // switch between usb and ble
}; */

