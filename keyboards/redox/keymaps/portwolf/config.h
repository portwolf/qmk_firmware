/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

// required for correct detection of keyboard
#define SPLIT_USB_DETECT
// define timeout for master/slave detection
#define SPLIT_USB_TIMEOUT 3000
// define poll frequency for split_usb_detect
#define SPLIT_USB_TIMEOUT_POLL 10

// Use i2c for comms between halfs
#define USE_I2C
// enable detection of connected half and choice of correct keyb layout
#define EE_HANDS

