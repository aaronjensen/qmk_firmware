#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum custom_keycodes {
	AJESCSPACE = SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case AJESCSPACE:
      if (record->event.pressed) {
				// pressed
        SEND_STRING(SS_TAP(X_ESC) SS_DELAY(100) SS_TAP(X_SPC));
      } else {
				// released
      }
      break;

  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, LT(1,KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_GRV, KC_INS, KC_LEFT, KC_RGHT, KC_LALT, LCAG(KC_NO), HYPR(KC_NO), KC_LGUI, KC_LCTL, KC_SPC, KC_F9, KC_F10, KC_F11, KC_F12, KC_VOLD, KC_VOLU, KC_VOLU, KC_FN0, KC_1, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_DOWN, KC_UP, KC_LBRC, KC_RBRC, KC_DEL, KC_BSPC, KC_PGUP, KC_PGDN, KC_ENT, KC_SPC),
	[1] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_LCBR, KC_LPRN, KC_EQL, KC_NO, KC_NO, KC_NO, KC_TILD, KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_PLUS, KC_NO, KC_UNDS, KC_RPRN, KC_RCBR, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_PIPE, KC_LT, KC_GT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, AJESCSPACE)
};
