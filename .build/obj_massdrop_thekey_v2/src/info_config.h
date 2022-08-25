// Copyright 2022 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef DEVICE_VER
#   define DEVICE_VER 0x0002
#endif // DEVICE_VER

#ifndef DIODE_DIRECTION
#   define DIODE_DIRECTION ROW2COL
#endif // DIODE_DIRECTION

#ifndef MANUFACTURER
#   define MANUFACTURER Drop
#endif // MANUFACTURER

#ifndef RGB_DI_PIN
#   define RGB_DI_PIN B1
#endif // RGB_DI_PIN

#ifndef RGBLED_NUM
#   define RGBLED_NUM 5
#endif // RGBLED_NUM

#ifndef RGBLIGHT_LIMIT_VAL
#   define RGBLIGHT_LIMIT_VAL 255
#endif // RGBLIGHT_LIMIT_VAL

#ifndef RGBLIGHT_HUE_STEP
#   define RGBLIGHT_HUE_STEP 10
#endif // RGBLIGHT_HUE_STEP

#ifndef RGBLIGHT_SAT_STEP
#   define RGBLIGHT_SAT_STEP 10
#endif // RGBLIGHT_SAT_STEP

#ifndef RGBLIGHT_VAL_STEP
#   define RGBLIGHT_VAL_STEP 15
#endif // RGBLIGHT_VAL_STEP

#ifndef PRODUCT
#   define PRODUCT The Key V2
#endif // PRODUCT

#ifndef PRODUCT_ID
#   define PRODUCT_ID 0x0000
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#   define VENDOR_ID 0xFEED
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#   define MATRIX_COLS 3
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#   define MATRIX_ROWS 1
#endif // MATRIX_ROWS


#ifndef MATRIX_COL_PINS
#   define MATRIX_COL_PINS { D2, D1, D0 }
#endif // MATRIX_COL_PINS


#ifndef MATRIX_ROW_PINS
#   define MATRIX_ROW_PINS { D4 }
#endif // MATRIX_ROW_PINS

