#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum layer_names {
    _QWERTY = 0,
    _WORMS,
    _FN,
    _NAVIGATION,
};

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_3key_2us(
            KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,        KC_5,   KC_MINS,                     KC_EQL,  KC_6,   KC_7,            KC_8,   KC_9,    KC_0,    KC_PSCR,
            KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,        KC_T,   KC_LBRC,                     KC_RBRC, KC_Y,   KC_U,            KC_I,   KC_O,    KC_P,    KC_BSLS,
            KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,        KC_G,   KC_PGDN,                     KC_PGUP, KC_H,   KC_J,            KC_K,   KC_L,    KC_SCLN, KC_QUOT,
            KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,        KC_B,                                KC_N,    KC_M,   KC_COMM,         KC_DOT, KC_SLSH, KC_RSPC,
            KC_LCTL, KC_LGUI, KC_LALT, KC_HOME, OSL(_FN),    KC_SPC, KC_DEL,                      KC_BSPC, KC_ENT, TG(_NAVIGATION), KC_END, KC_RALT, KC_LGUI, KC_RCTL
    ),

    [_WORMS] = LAYOUT_3key_2us(
            KC_NO ,   KC_NO ,  KC_NO ,  KC_NO ,   KC_NO ,      KC_NO , KC_NO ,                          KC_NO , KC_NO ,  KC_NO ,          KC_NO ,  KC_NO ,   KC_NO , KC_NO ,
            KC_NO ,   KC_NO ,  KC_UP,   KC_NO ,   KC_NO ,      KC_NO , KC_NO ,                          KC_NO , KC_NO ,  KC_NO ,          KC_UP,   KC_NO ,   KC_NO , KC_NO ,
            KC_NO ,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO ,      KC_NO , KC_NO ,                          KC_NO , KC_NO ,  KC_LEFT,         KC_DOWN, KC_RIGHT, KC_NO , KC_NO ,
            KC_LSFT,  KC_NO ,  KC_NO ,  KC_NO ,   KC_NO ,      KC_NO,                                   KC_NO , KC_NO ,  KC_NO ,          KC_NO ,  KC_NO ,   KC_LSFT,
            KC_NO ,   KC_NO ,  KC_NO ,  KC_NO ,   TO(_QWERTY), KC_SPC, KC_ENT,                          KC_ENT, KC_SPC,  KC_NO ,          KC_NO ,  KC_NO ,  KC_NO ,   KC_NO
    ),

    [_FN] = LAYOUT_3key_2us(
            KC_GRV,       KC_F1,      KC_F2,      KC_F3,    KC_F4,       KC_F5,  KC_F6,            KC_F7,   KC_F8,   KC_F9,           KC_F10,  KC_F11,  KC_F12,  KC_BSPC,
            TO(_WORMS),   KC_Q,       KC_MPLY,    KC_MPRV,  KC_MNXT,     KC_T,   RGB_VAI,          KC_LALT, KC_Y,    KC_U,            KC_I,    KC_O,    KC_P,    KC_EQL,
            KC_CAPS,      KC_A,       KC_VOLD,    KC_VOLU,  KC_MUTE,     KC_G,   RGB_VAD,          KC_BSPC, KC_H,    KC_J,            KC_K,    KC_L,    KC_SCLN, KC_QUOT,
            KC_LSFT,      LALT(KC_Z), LALT(KC_X), TO(_FN),    KC_V,        KC_B,                     KC_N,    KC_M,    KC_COMM, KC_DOT,          KC_SLSH, KC_RSFT,
            KC_LCTL,      KC_LGUI,    KC_LALT,    KC_END,   TO(_QWERTY), KC_ENT, KC_DEL,           KC_BSPC, KC_BSPC, TG(_NAVIGATION), KC_END,  KC_RALT, KC_LGUI, KC_RCTL
    ),

    [_NAVIGATION] = LAYOUT_3key_2us(
            ______, ______, ______, ______, ______,      ______, ______,                          ______, ______,  ______,          ______, ______,   ______, ______,
            ______, ______, ______, ______, ______,      ______, ______,                          ______, ______,  ______,          ______, ______,   ______, ______,
            ______, ______, ______, ______, ______,      ______, ______,                          ______, KC_LEFT, KC_DOWN,         KC_UP,  KC_RIGHT, ______, ______,
            ______, ______, ______, ______, ______,      ______,                                  ______, ______,  ______,          ______, ______,   ______,
            ______, ______, ______, ______, TO(_QWERTY), ______, ______,                          ______, ______,  TG(_NAVIGATION), ______, ______,   ______, ______
    ),
};

const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 12, HSV_WHITE}       // Light 12 LEDs, starting with LED 0
        );

const rgblight_segment_t PROGMEM my_navigation_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {11, 2, HSV_CYAN}
        );

const rgblight_segment_t PROGMEM my_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {11, 2, HSV_GREEN}
        );

const rgblight_segment_t PROGMEM my_worms_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 1, HSV_RED},
        {3, 2, HSV_ORANGE},
        {7, 1, HSV_YELLOW},
        {11, 1, HSV_GREEN},
        {12, 1, HSV_CYAN},
        {15, 1, HSV_BLUE},
        {19, 2, HSV_PURPLE},
        {23, 1, HSV_MAGENTA}
        );

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
        my_capslock_layer,
        my_worms_layer,  // Overrides caps lock layer
        my_fn_layer,    // Overrides other layers
        my_navigation_layer     // Overrides other layers
        );

#define BIT_SET(intval, bitnum) ((intval & (1 << bitnum)) > 0)

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(1, BIT_SET(state, _WORMS));
    rgblight_set_layer_state(2, BIT_SET(state, _FN));
    rgblight_set_layer_state(3, BIT_SET(state, _NAVIGATION));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}
