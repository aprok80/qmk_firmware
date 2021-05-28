/* Copyright 2021 Albrecht
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
#include "keymap_german.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3,
    _FN4
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    ALT_TAB = SAFE_RANGE,
    MY_PSW,
    MY_GRV,
    MY_CIRC,
    MY_ACUT
};

/*
alt tab coden:
  wenn fn1 + tab => 
    alt einrasten bis fn up
    
app machen

 keycodes einlesen, verschidene tests machen

chords: homerow gedrückt halten, alle anderen erreichen
blind start: hände zusammen, homerow findee
5 min tests:
	nur buchstaben
	coding chars
	seltene chars
	combinationen => meine liste nehmen mit shortcuts


*/           
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,     KC_J,   KC_D,   KC_U,   KC_A,   KC_X,       KC_P,   KC_H,   KC_L,   KC_M,   KC_W,   KC_Q,
        KC_TAB,     KC_C,   KC_T,   KC_I,   KC_E,   KC_O,       KC_B,   KC_N,   KC_R,   KC_S,   KC_G,   DE_SS, 
        LCTL(KC_V), KC_F,   KC_V,   DE_UE,  DE_AE,  DE_OE,      DE_Y,   DE_Z,   KC_COMM,KC_DOT, KC_K,   MY_PSW, 
        KC_LGUI,    DM_PLY1,KC_DEL, KC_END,                                     KC_UP,  KC_DOWN,KC_LEFT,KC_RIGHT,
                                    MO(_FN3),MT(MOD_RSFT,KC_BSPC),MO(_FN1),MO(_FN2),KC_SPC, MO(_FN4)
    ),
    [_FN1] = LAYOUT(
        _______,    DE_AT,  DE_UNDS,DE_LBRC,DE_RBRC,MY_CIRC,    DE_EXLM,DE_LESS,DE_MORE,DE_EQL, DE_AMPR,DE_PARA,
        ALT_TAB,    DE_BSLS,DE_SLSH,DE_LCBR,DE_RCBR,DE_ASTR,    DE_QST, DE_LPRN,DE_RPRN,DE_MINS,DE_COLN,DE_EURO,
        LCTL(KC_C), DE_HASH,DE_DLR, DE_PIPE,DE_TILD,MY_GRV,     DE_PLUS,DE_PERC,DE_DQOT,DE_QUOT,DE_SCLN,_______, 
       LGUI(KC_TAB),DM_REC1,KC_INS, KC_HOME,                                    KC_PGUP,KC_PGDN,RCTL(KC_LEFT),RCTL(KC_RIGHT),
                                    _______,_______,_______,    _______,_______,_______
    ),
    [_FN2] = LAYOUT(
        _______,    DE_AT,  DE_UNDS,DE_LBRC,DE_RBRC,MY_CIRC,    DE_EXLM,DE_LESS,DE_MORE,DE_EQL, DE_AMPR,DE_PARA,
        ALT_TAB,    DE_BSLS,DE_SLSH,DE_LCBR,DE_RCBR,DE_ASTR,    DE_QST, DE_LPRN,DE_RPRN,DE_MINS,DE_COLN,DE_EURO,
        LCTL(KC_C), DE_HASH,DE_DLR, DE_PIPE,DE_TILD,MY_GRV,     DE_PLUS,DE_PERC,DE_DQOT,DE_QUOT,DE_SCLN,_______, 
       LGUI(KC_TAB),DM_REC1,KC_INS, KC_HOME,                                    KC_PGUP,KC_PGDN,RCTL(KC_LEFT),RCTL(KC_RIGHT),
                                    _______,_______,_______,    _______,_______,_______
    ),
    /*
    [_FN1] = LAYOUT(
        ALT_TAB,    DE_AT,  DE_UNDS,DE_LBRC,DE_RBRC,DE_CIRC,    DE_SQ2 ,KC_7,   KC_8,   KC_9,   KC_PMNS,_______,
        KC_ESC,     DE_BSLS,DE_SLSH,DE_LCBR,DE_RCBR,DE_ASTR,    DE_SQ3 ,KC_4,   KC_5,   KC_6,   KC_PPLS,_______, 
        LCTL(KC_C), DE_HASH,DE_DLR, DE_PIPE,DE_TILD,DE_GRV,     DE_RING,KC_1,   KC_2,   KC_3,   KC_PENT,DM_RSTP, 
       LGUI(KC_TAB),DM_REC1,KC_INS, KC_HOME,                                    KC_0,   DE_UNDS,_______,_______,
                                    _______,_______,_______,    _______,_______,_______
    ),
    [_FN2] = LAYOUT(
        _______,    KC_F9,  KC_F10, KC_F11, KC_F12, KC_PSCR,    DE_EXLM,DE_LESS,DE_MORE,DE_EQL, DE_AMPR,DE_PARA,
        _______,    KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_SLCK,    DE_QST, DE_LPRN,DE_RPRN,DE_MINS,DE_COLN,DE_EURO,
        _______,    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_PAUS,    DE_PLUS,DE_PERC,DE_DQOT,DE_QUOT,DE_SCLN,DM_REC2, 
        _______,    DM_RSTP,_______,_______,                                    KC_PGUP,KC_PGDN,RCTL(KC_LEFT),RCTL(KC_RIGHT),
                                    _______,_______,_______,    _______,_______,_______
    ),
    */
    [_FN3] = LAYOUT(
        _______,    _______,KC_INS, KC_HOME,KC_PGUP,_______,    DE_SQ2 ,KC_7,   KC_8,   KC_9,   KC_PMNS,_______,
        _______,    _______,KC_DEL, KC_END, KC_PGDN,_______,    DE_SQ3 ,KC_4,   KC_5,   KC_6,   KC_PPLS,_______, 
        LCTL(KC_X), KC_LGUI,KC_PSCR,KC_SLCK,KC_PAUS,MY_ACUT,    DE_RING,KC_1,   KC_2,   KC_3,   KC_PENT,_______, 
       LGUI(KC_TAB),DM_RSTP,_______,_______,                                    KC_0,   DE_UNDS,_______,_______,
                                    _______,_______,_______,    _______,_______,_______
    ),
    [_FN4] = LAYOUT(
        _______,    KC_F9,  KC_F10, KC_F11, KC_F12, KC_PSCR,    _______,_______,KC_UP,_______,_______,_______,
        _______,    KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_SLCK,    _______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______,
        _______,    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_PAUS,    _______,KC_WH_U,KC_WH_D,_______,_______,_______,
        _______,    DM_RSTP,_______,_______,                                    KC_PGUP,KC_PGDN,_______,_______,
                                    _______,_______,_______,    _______,_______,_______
    ),
};

bool is_alt_tab_active = false;
uint16_t lastkeycode = 0;

bool isModifierKey( uint16_t keycode ) {
    switch (keycode) {
        case MO(_FN1):
        case MO(_FN2):
        case MO(_FN3):
        case MO(_FN4):
            return true;
        default: 
            return false;
    }
}

void toggleOneshtMod( uint8_t mod, uint8_t pin ) {
    if( (get_oneshot_mods() & MOD_BIT(mod)) > 0 ) {
        del_oneshot_mods(MOD_BIT(mod));
        writePin( pin, 0 );
    } else {
        add_oneshot_mods(MOD_BIT(mod));
        writePin( pin, 1 );
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // modifier key released and no other key since pressed =>
    // FN1  ALT
    // FN2  CTL
    // FN3  ENTER
    // FN4  ENTER
    if( isModifierKey( keycode ) && keycode == lastkeycode && !record->event.pressed ) {
        switch( keycode ) {
            case MO(_FN1):
                toggleOneshtMod( KC_LALT, D3 );
                break;
            case MO(_FN2):
                toggleOneshtMod( KC_LCTL, F4 );
                break;
            case MO(_FN3):
            case MO(_FN4):
                tap_code( KC_ENTER );
                break;
        }
    }
    if (record->event.pressed) {
        switch( keycode ) {
            case ALT_TAB:
                break;
            case MY_PSW:
                SEND_STRING("xiem6g");
                break;
            case MY_GRV:
                SEND_STRING( SS_DOWN(X_RSFT) SS_TAP(X_EQUAL) SS_UP(X_RSFT) " " );
                break;
            case MY_ACUT:
                SEND_STRING( SS_TAP(X_EQL) " " );
                break;
            case MY_CIRC:
                SEND_STRING( SS_TAP(X_GRV) " " );
                break;
        }    
        lastkeycode = keycode;
    } 
    return true;
}