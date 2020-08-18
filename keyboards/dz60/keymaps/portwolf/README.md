# pertwelfs dz60 keyboard layout

My DZ60 layout (currently ANSI, will be changed to split spacebar later)

## Adjusting layout instructions

Change layout to your liking
```
https://config.qmk.fm
```
Update layout picture

```
on config.qmk.fm click "Print Layout" -> scrot, save as qmk_firmware/keyboards/dz60/keymaps/portwolf/layout.png
```
Download .json file (keymap.json) from the configurator website and place it in:
```
qmk_firmware/keyboards/dz60/keymaps/portwolf/keymap.json
```
Compile the firmware w/adjusted layout
```
qmk compile (buildenv. set)
```
Put dz60 into bootloader mode. Check lsusb, should indicate: atmel*****
```
space + b
```
Flash the compiled .hex file (keyboard restarts autoMAGICALLY! - ready to use after flash)
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
