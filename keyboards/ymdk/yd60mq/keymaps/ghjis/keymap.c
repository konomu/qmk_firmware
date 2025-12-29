#include QMK_KEYBOARD_H
#include "yd60mq.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * _______ can be used in place of _______ (transparent) *
 * XXXXXXX can be used in place of KC_NO (No Operation)  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

enum layer_names {
    _MAIN,
	_GAMING,
    _EXT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │Esc│1 !│2 @│3 #│4 $│5 %│6 ^│7 &│8 *│9 (│0 )│= +│` ~│Ins│Del│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │Tab  │V  │M  │L  │C  │P  │Q  │F  │O  │U  │. >│- _│[ {│     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐Ent │
 * │LCtl  │S  │T  │R  │D  │Y  │B  │N  │A  │E  │I  │/ ?│] }│    │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┤
 * │LShift  │K  │J  │G  │W  │Z  │X  │H  │' "│; :│, <│\ |│RShift│
 * ├─────┬──┴──┬┴───┼───┴┬──┴───┴───┴┬──┴─┬─┴──┬┴──┬┴──┬┴──┬───┤
 * │MHenk│LWin │LAlt│Xten│    Spc    │Bspc│RCtl│ ← │ ↓ │ ↑ │ → │
 * └─────┴─────┴────┴────┴───────────┴────┴────┴───┴───┴───┴───┘
*/
  [_MAIN] = LAYOUT_ghjis(
	KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_EQL,  KC_GRV,  KC_INS,  KC_DEL,
	KC_TAB,  KC_V,    KC_M,    KC_L,    KC_C,    KC_P,   KC_Q,    KC_F,    KC_O,    KC_U,  KC_DOT,  KC_MINS, KC_LBRC,
	KC_LCTL, KC_S,    KC_T,    KC_R,    KC_D,    KC_Y,   KC_B,    KC_N,    KC_A,    KC_E,    KC_I,  KC_SLSH, KC_RBRC,  KC_ENT,
	KC_BSPC, KC_K,    KC_J,    KC_G,    KC_W,    KC_Z,   KC_X,    KC_H, KC_QUOT, KC_SCLN, KC_COMM,  _______, KC_BSLS, KC_BSPC,
	LCTL(KC_F9), KC_LGUI, KC_LALT, MO(_EXT),           KC_SPC,          KC_LSFT, KC_RCTL, KC_LEFT,  KC_DOWN,   KC_UP, KC_RGHT),

  [_EXT] = LAYOUT_ghjis(
	KC_MUTE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, TO(_GAMING),
	KC_VOLU, _______, MS_WHLU, KC_WBAK, KC_WFWD, _______, _______, _______, _______, _______, _______, _______, _______,
	KC_VOLD, LCTL(KC_A),  MS_WHLD, KC_LSFT, KC_LCTL, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC, _______, _______, _______,
	LCTL(KC_BSPC), LCTL(KC_Z),  LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), _______, _______, KC_HOME, KC_END, _______, _______, _______, QK_BOOT, _______,
	KC_SLEP, _______, KC_PSCR, _______,                   _______,                    _______, _______, _______, _______, _______, _______),

  [_GAMING] = LAYOUT_ghjis(
	KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,   KC_0,  KC_EQL, KC_GRV, KC_BSLS, KC_DEL,
	KC_TAB,  KC_V,    KC_M,    KC_L,    KC_C,    KC_P,   KC_Q,    KC_F,    KC_O,    KC_U,  KC_DOT,  KC_MINS, KC_LBRC,
	KC_EQL,  KC_S,    KC_T,    KC_R,    KC_D,    KC_Y,   KC_B,    KC_N,    KC_A,    KC_E,    KC_I,  KC_SCLN, KC_RBRC,  KC_ENT,
	KC_BSPC, KC_K,    KC_J,    KC_G,    KC_W,    KC_Z,   KC_X,    KC_H, KC_QUOT, KC_SCLN, KC_COMM,  _______, TO(_MAIN), KC_BSPC,
	KC_EQL, _______, KC_LALT, KC_DEL,              KC_SPC,              KC_RSFT, KC_RCTL, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
};
