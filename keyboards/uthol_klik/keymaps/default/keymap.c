#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_K, KC_I
    )
};

void keyboard_post_init_user(void) {
    // Enable RGB
    rgblight_enable();

    // Set static color: Purple (RGB 128, 0, 128)
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_setrgb(128, 0, 128);
}
