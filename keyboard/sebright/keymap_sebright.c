
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: sebright */
	 KEYMAP(ESC,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, BSPC, \
			TAB,   A,   S,   D,   F,   G,   H,   J,   K,   L,   ENT, \
			LCTL,  Z,   X,   C,   V,   B,   N,   M,   SCLN, FN1,  FN0, \
			LSFT,  LALT,     FN2,	 SPC,	COMM,DOT, QUOT,SLSH),
				
    /* 1: arrow */
	 KEYMAP(ESC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, \
			TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
			TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN1, FN0, \ 
			TRNS,  TRNS,FN2,	  TRNS,	       LEFT,UP,  DOWN, RIGHT),
    /* 2: numfunc */
	 KEYMAP(GRV,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, DEL, \
			CAPS,  HOME,TRNS,TRNS,PGUP,HOME,MINS,EQL,  LBRC,RBRC, ENT, \
			TRNS,  END, FN9, INS, PGDN, END,  SCLN, BSLS, SCLN,FN1, FN0, \
			TRNS,  TRNS,FN2,	        SPC,        LEFT,UP,  DOWN, RIGHT),
    /* 3: symbol */
	 KEYMAP(ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, DEL, \
			HOME,  4,   5,   6,   PGUP,FN3, FN4,   FN5,     E,   I, FN7, \
			END,   7,   8,   9,   PGDN, PSCR, LGUI,   L,   SCLN,FN1, FN0, \
			LSFT,  0,   FN2,	  FN6,	    LEFT,UP,  DOWN, RIGHT),
    /* 4: sebright flipped control and shift */
	 KEYMAP(ESC,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, BSPC, \
			TAB,   A,   S,   D,   F,   G,   H,   J,   K,   L,   ENT, \
			LSFT,  Z,   X,   C,   V,   B,   N,   M,   SCLN, FN1,  FN0, \
			LCTL,  LALT,     FN2,	 SPC,	COMM,DOT, QUOT,SLSH),
    /* 5: sebright */
	 KEYMAP(ESC,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, BSPC, \
			TAB,   A,   S,   LSFT,RSFT,PAUS,   H,   J,   K,   L,   ENT, \
			LCTL,  Z,   X,   C,   V,   B,   N,   M,   SCLN, FN1,  FN0, \
			LSFT,  LALT,     FN2,	 SPC,	COMM,DOT, QUOT,SLSH),
				
};
const uint16_t PROGMEM fn_actions[] = {
    /* sebright Layout */ 
    [0] = ACTION_LAYER_MOMENTARY(2),  // to numfunc overlay
    [1] = ACTION_LAYER_TOGGLE(1),     // toggle arrow overlay
    [2] = ACTION_LAYER_TOGGLE(3),  // to Layout selector
    [3] = ACTION_LAYER_TOGGLE(4),  // toggle ctrl/shift switch overlay
    [4] = ACTION_LAYER_TOGGLE(2),  // toggle OSX overlay
    [5] = ACTION_LAYER_SET_CLEAR(0),  // back to original sebright layout
    [6] = ACTION_LAYER_SET_CLEAR(0),  // back to original sebright layout
    [7] = ACTION_LAYER_TOGGLE(5),  // back to original sebright layout
	};