#pragma once

#ifdef RGBLIGHT_ENABLE
//#    define RGBLIGHT_EFFECT_BREATHING
//#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#    define RGBLIGHT_EFFECT_SNAKE
//#    define RGBLIGHT_EFFECT_KNIGHT
//#    define RGBLIGHT_EFFECT_CHRISTMAS
//#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#    define RGBLIGHT_EFFECT_RGB_TEST
//#    define RGBLIGHT_EFFECT_ALTERNATING
//#    define RGBLIGHT_EFFECT_TWINKLE
#endif

#define TAP_CODE_DELAY 5

// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE 
// #define AUTO_MOUSE_DEFAULT_LAYER    6
// #define AUTO_MOUSE_TIME             900  // マウスが止まってから元のレイヤーに戻るまでの時間(ms)

#define KEYBALL_CPI_DEFAULT        700  // マウス速度 (default: 500)
#define KEYBALL_SCROLL_DIV_DEFAULT 5    // スクロール速度 (default: 4)
#define TAPPING_TERM               180  //  レイヤ切り替わり速度 ミリ秒
#define DYNAMIC_KEYMAP_LAYER_COUNT 7    // レイヤ数

#define PRECISION_ENABLE                // CPI速度調整有効化
#define PRECISION_CPI               3  // 下げた時のCPI (1/100の値を指定)