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
        TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,    LBRC, \
        CAPS, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT, \
        LSFT,      Z,   X,   C,   V,   B,   N,   M,   COMM, DOT, RSFT, \
                  LCTL,LALT,     SPC, SPC, SPC,       RALT, RGUI),
    /* 1: Poker Fn */
    KEYMAP_ANSI(
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP, \
        TRNS,VOLD,VOLU,MUTE,EJCT,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT, \
        FN2,TRNS, FN3,TRNS,TRNS,TRNS,PPLS,PMNS,END,PGDN,DOWN,TRNS,\
        TRNS,TRNS,TRNS,          TRNS,               DEL,TRNS,TRNS),
};
const action_t fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),  // 切层
    ACTION_FUNCTION(KEYBOARD_CONTROL), // 睡眠
    ACTION_FUNCTION(SWITCH_DEVICE), // 切换 USB模式/BLE模式
    ACTION_FUNCTION_OPT(KEYBOARD_CONTROL, CONTROL_NKRO),//切换全键无冲/6键无冲

    //ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_0),//切换1号设备
    //ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_1),//切换2号设备
    //ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_2),//切换3号设备
    //ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_REBOND),//重新绑定当前设备
};


/* const action_t fn_actions[] = {
    ACTION_MODS_TAP_KEY(MOD_RSFT,KC_UP),
    ACTION_MODS_TAP_KEY(MOD_RALT, KC_DOWN),
    ACTION_MODS_TAP_KEY(MOD_RGUI, KC_LEFT),
    ACTION_LAYER_TAP(1, KC_RGHT),

    ACTION_FUNCTION(KEYBOARD_CONTROL), // sleep
    ACTION_FUNCTION(SWITCH_DEVICE), // switch between usb and ble
}; */

