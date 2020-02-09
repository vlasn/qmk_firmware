/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0006
#define MANUFACTURER    Clackee
#define PRODUCT         Madpad
#define DESCRIPTION     A 4x6 macropad/numpad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 6
#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROW_PINS { D1, C6, F4, F6 }
#define MATRIX_COL_PINS { B1, F7, F5, D7, D4, D0 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5