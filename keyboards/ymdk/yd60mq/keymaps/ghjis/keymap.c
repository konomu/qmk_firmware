#include QMK_KEYBOARD_H
#include "yd60mq.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * _______ can be used in place of _______ (transparent) *
 * XXXXXXX can be used in place of KC_NO (No Operation)  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

enum layer_names {
    _MAIN,
    _GAMING,
    _EXT,
    _QWERTY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│1 !│2 @│3 #│4 $│5 %│6 ^│7 &│8 *│9 (│0 )│= +│` ~│PSc│Del│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
     * │Tab  │X  │L  │C  │M  │Z  │' "│F  │U  │O  │Y  │- _│[ {│     │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐Ent │
     * │LCtl  │N  │R  │S  │T  │K  │P  │H  │E  │A  │I  │; :│] }│    │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┤
     * │LShift  │J  │W  │G  │V  │Q  │B  │D  │, <│. >│/ ?│\ |│RShift│
     * ├─────┬──┴──┬┴───┼───┴┬──┴───┴───┴┬──┴─┬─┴──┬┴──┬┴──┬┴──┬───┤
     * │MHenk│LWin │LAlt│Xten│    Spc    │Bspc│RCtl│ ← │ ↓ │ ↑ │ → │
     * └─────┴─────┴────┴────┴───────────┴────┴────┴───┴───┴───┴───┘
     */
    [_MAIN] = LAYOUT_ghjis(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_EQL,  KC_GRV,  KC_INS,  KC_DEL,
        KC_TAB,  KC_X,    KC_L,    KC_C,    KC_M,    KC_Z,   KC_QUOT, KC_F,    KC_U,    KC_O,    KC_Y,    KC_MINS, KC_LBRC,
        KC_LCTL, KC_N,    KC_R,    KC_S,    KC_T,    KC_K,   KC_P,    KC_H,    KC_E,    KC_A,    KC_I,    KC_SCLN, KC_RBRC,  KC_ENT,
        KC_BSPC, KC_J,    KC_W,    KC_G,    KC_V,    KC_Q,   KC_B,    KC_D, KC_COMM,  KC_DOT, KC_SLSH,    _______, KC_BSLS, KC_BSPC,
        KC_INT5, KC_LGUI, KC_LALT, MO(_EXT),           KC_SPC,          KC_LSFT, KC_RSFT,    KC_LEFT, KC_DOWN,  KC_UP, KC_RGHT),

    [_EXT] = LAYOUT_ghjis(
        KC_MUTE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, TO(_QWERTY), TO(_GAMING),
        KC_VOLU, _______, KC_WH_U, KC_WBAK, KC_WFWD, _______, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_DEL, _______, _______,
        KC_VOLD, LCTL(KC_A),  KC_WH_D, KC_LSFT, KC_LCTL, _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, _______, _______, _______,
        LCTL(KC_BSPC), LCTL(KC_Z),  LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), _______, _______, _______, _______, _______, _______, _______, QK_BOOT, _______,
        KC_SLEP, _______, KC_PSCR, _______,                   _______,                    _______, _______, _______, _______, _______, _______),

    [_GAMING] = LAYOUT_ghjis(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,   KC_0,  KC_EQL, KC_GRV, KC_BSPC, KC_DEL,
        KC_TAB,  KC_X,    KC_L,    KC_C,    KC_M,    KC_Z,   KC_QUOT, KC_F,    KC_U,    KC_O,    KC_Y,    KC_MINS, KC_LBRC,
        KC_EQL,  KC_N,    KC_R,    KC_S,    KC_T,    KC_K,   KC_P,    KC_H,    KC_E,    KC_A,    KC_I,    KC_SCLN, KC_RBRC, KC_ENT,
        KC_RSFT, KC_J,    KC_W,    KC_G,    KC_V,    KC_Q,   KC_B,    KC_D, KC_COMM,  KC_DOT, KC_SLSH, _______, KC_BSLS, TO(_MAIN),
        KC_EQL, _______, KC_LALT, KC_DEL,              KC_SPC,              KC_RSFT, KC_RCTL, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

    [_QWERTY] = LAYOUT_ghjis(
            KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,   KC_0,  KC_MINS, KC_EQL, KC_INT3, KC_BSPC,
            KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
            KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,    KC_QUOT, KC_BSLS, KC_ENT,
            KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, _______, KC_INT1, TO(_MAIN),
            KC_LCTL, KC_LGUI, KC_LALT, KC_INT5,              KC_SPC,              KC_INT4, KC_INT2, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
};
