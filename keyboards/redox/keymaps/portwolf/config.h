#pragma once

// required for correct detection of keyboard
#define SPLIT_USB_DETECT
// define timeout for master/slave detection
#define SPLIT_USB_TIMEOUT 3000
// define poll frequency for split_usb_detect
#define SPLIT_USB_TIMEOUT_POLL 10
// enable software watchdog on slave side, reboots keyb if no successful coms within SPLIT_USB_TIMEOUT
#define SPLIT_WATCHDOG_ENABLE

// Use i2c for comms between halfs
#define USE_I2C
// enable detection of connected half and choice of correct keyb layout
#define EE_HANDS

