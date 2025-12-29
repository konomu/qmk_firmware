#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define MANUFACTURER    YMDK
#define PRODUCT         YD60MQ
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B6, D4, B1, F7, B5, B4, D7, D6, B3, B2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
/* #define BACKLIGHT_PIN B7
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#endif */

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* prevent stuck modifiers */

/* #define RGB_DI_PIN E2
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#define RGBLED_NUM 16 */

#define FORCE_NKRO
#define ONESHOT_TIMEOUT 8000
#define TAPPING_TERM 70
#define HOLD_ON_OTHER_KEY_PRESS
#define TAPPING_FORCE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define RETRO_TAPPING
#define PERMISSIVE_HOLD
#define MOUSEKEY_MAX_SPEED 12
#define MOUSEKEY_TIME_TO_MAX 19
#define TAPPING_TERM_PER_KEY
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 8
