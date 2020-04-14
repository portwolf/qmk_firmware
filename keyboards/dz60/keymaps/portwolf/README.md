# pertwelfs dz60 keyboard layout


# Adjusting layout instructions

-1- change layout
https://configurator.qmk.fm
-2- download .json file (keylayout)
place it in keyboards/dz60/keymaps/portwolf/keylayout.json
-3- compile the firmware w/adjusted layout
qmk compile (buildenv. set)
-4- put dz60 into bootloader mode 
space + b
check lsusb, should indicate: atmel*****
-5- flash .hex file
qmk flash


# Layout overview
![current layout](https://github.com/portwolf/qmk_firmware/blob/portwolf/keyboards/dz60/keymaps/portwolf/layout.png)
