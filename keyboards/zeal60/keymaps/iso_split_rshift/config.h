/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// only change
//#undef RGB_DI_PIN 
//#define RGB_DI_PIN B2

/* enable/disable LEDs based on layout */
#undef USE_SPLIT_BACKSPACE
#define USE_SPLIT_BACKSPACE 0

#undef USE_SPLIT_LEFT_SHIFT
#define USE_SPLIT_LEFT_SHIFT 0

#undef USE_SPLIT_RIGHT_SHIFT
#define USE_SPLIT_RIGHT_SHIFT 1

#undef USE_7U_SPACEBAR
#define USE_7U_SPACEBAR 0

#undef USE_ISO_ENTER
#define USE_ISO_ENTER 1

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

// disable backlight when USB suspended (PC sleep/hibernate/shutdown)
#undef BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 
#define BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 1

// disable backlight after timeout in minutes, 0 = no timeout
#undef BACKLIGHT_DISABLE_AFTER_TIMEOUT
#define BACKLIGHT_DISABLE_AFTER_TIMEOUT 1

// disable debug print
#undef NO_DEBUG
#define NO_DEBUG

// disable print
//#define NO_PRINT

// disable action features
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
#endif
