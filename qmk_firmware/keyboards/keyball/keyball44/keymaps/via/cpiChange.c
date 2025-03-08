#ifdef PRECISION_ENABLE

#include QMK_KEYBOARD_H

static const uint16_t PROGMEM nomal_cpi = KEYBALL_CPI_DEFAULT / 100;
static const uint16_t PROGMEM down_cpi  = PRECISION_CPI;

// キー押下中だけ切り替え
void precision_switch(bool pressed) {
    if (pressed) {
        keyball_set_cpi(down_cpi);
    } else {
        keyball_set_cpi(nomal_cpi);
    }
}

#endif