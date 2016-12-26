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
            LCTL, A,    S,    D,    F,    G,    H,    J,    K,    L,    ENT, \
            LSFT, Z,    X,    C,    V,    B,          N,    M,    COMM, DOT,  SLSH, \
            FN2,  LALT, LGUI,       FN0,        FN1,              ESC,  RGUI, FN2),

    /* 1: Raise */
     KEYMAP(GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, \
            TRNS, TRNS, TRNS, TRNS, QUOT, TRNS, TRNS, FN22, FN23, EQL,  SCLN, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, BSLS, \
            TRNS, TRNS, TRNS,       TRNS,       SPC,              TRNS, TRNS, TRNS),

    /* 2: Lower */
     KEYMAP(FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, FN20, FN21, \
            TRNS, TRNS, TRNS, TRNS, FN27, TRNS, TRNS, LBRC, RBRC, FN24, FN25, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, FN26, \
            TRNS, TRNS, TRNS,       SPC,        TRNS,             TRNS, TRNS, TRNS),

    /* 3: Function */
     KEYMAP(TRNS, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  TRNS, \
            TRNS, TRNS, PGDN, HOME, END,  PGUP, LEFT, DOWN, UP,   RIGHT,TRNS, \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, BTLD, \
            TRNS, TRNS, TRNS,       TRNS,       TRNS,             TRNS, TRNS, TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),
    [1] = ACTION_LAYER_TAP_KEY(2, KC_SPC),
    [2] = ACTION_LAYER_MOMENTARY(3),

    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),

    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
};
