#include "keymap_common.h"

/*

     KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS,       TRNS,       TRNS,             TRNS, TRNS, TRNS),
*/

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default */
     KEYMAP(TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    BSPC, \
            LCTL, A,    S,    D,    F,    G,    H,    J,    K,    L,    FN1, \
            LSFT, Z,    X,    C,    V,    B,          N,    M,    COMM, DOT,  SLSH, \
            FN0,  LALT, LGUI,       ENT,        SPC,              FN2,  QUOT, RSFT),

    /* 1: FN0 */
     KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, LEFT, DOWN, UP,   RIGHT,TRNS, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, \
            FN0 , TRNS, TRNS,       TRNS,       TRNS,             TRNS, TRNS, TRNS),

    /* 2: FN1 */
     KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, FN1,  \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS,       TRNS,       TRNS,             TRNS, TRNS, TRNS),

    /* 3: FN2 */
     KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, BTLD, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS,       TRNS,       TRNS,             FN2,  TRNS, TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_LAYER_MOMENTARY(3)
};
