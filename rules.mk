SRC += Sturek.c

# Common feature for all keyboards
BOOTMAGIC_ENABLE = yes
EXTRAKEY_ENABLE = yes
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no

# RGB matrix lights for BM40
ifeq ($(strip $(KEYBOARD)), bm40hsrgb)
    RGB_MATRIX_ENABLE = yes
    RGB_MATRIX_CUSTOM_USER = yes
endif

# Split features for Corne
ifeq ($(strip $(KEYBOARD)), crkbd/rev1/common)
    WPM_ENABLE = yes
    MOUSEKEY_ENABLE = yes
    OLED_DRIVER_ENABLE = yes
endif