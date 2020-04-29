# pertwelfs dz60 keyboard layout

My DZ60 layout (currently ANSI, will be changed to split spacebar later)

## Adjusting layout instructions

### change layout
```
https://config.qmk.fm
```
### download .json file (keymap.json)
```
place it in keyboards/dz60/keymaps/portwolf/keymap.json
```
### compile the firmware w/adjusted layout
```
qmk compile (buildenv. set)
```
### put dz60 into bootloader mode
```
space + b
```
check lsusb, should indicate: atmel*****
### flash .hex file
```
qmk flash
```

## Update repository
Update local repo first
```
git pull
```

Add local changes
```
git add .
```

Add commit message
```
git commit -m "Your Message Hea"
```

Push the changes to the remote repository
```
git push
```

# Layout overview
![current layout](https://github.com/portwolf/qmk_firmware/blob/portwolf/keyboards/dz60/keymaps/portwolf/layout.png)
