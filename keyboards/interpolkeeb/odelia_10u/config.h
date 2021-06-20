/*
Copyright 2021 kb-elmo<mail@elmo.space>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6BE3
#define PRODUCT_ID      0xA132 
#define DEVICE_VER      0x0001
#define MANUFACTURER    InterpolKeeb
#define PRODUCT         Odelia-10u

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 19

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS {E6, B7, B3, B2, B1, B0}
#define MATRIX_COL_PINS {B5, B6, C6, C7, F7, F6, F5, F4, F1, F0, D5, D4, D6, D7, B4, D3, D2, D1, D0}
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* reduce EEPROM usage */
#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define LAYER_STATE_8BIT
