#pragma once

#include "wrappers.h"

// Common QMK variables
#define TAPPING_TERM 250
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAP_CODE_DELAY 10

#ifdef RGB_MATRIX_ENABLE
#  define RGB_MATRIX_KEYPRESSES
#  define RGB_DISABLE_WHEN_USB_SUSPENDED true
#  define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#endif

#ifdef OLED_DRIVER_ENABLE
#  define OLED_TIMEOUT 5000
#endif