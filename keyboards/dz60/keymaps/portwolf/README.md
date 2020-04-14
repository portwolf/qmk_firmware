# pertwelfs dz60 keyboard layout

# Adjusting layout instructions

## change layout
https://config.qmk.fm
## download .json file (keylayout)
place it in keyboards/dz60/keymaps/portwolf/keylayout.json
## compile the firmware w/adjusted layout
qmk compile (buildenv. set)
## put dz60 into bootloader mode 
space + b
check lsusb, should indicate: atmel*****
## flash .hex file
qmk flash


# Layout overview
![current layout](https://github.com/portwolf/qmk_firmware/blob/portwolf/keyboards/dz60/keymaps/portwolf/layout.png)
