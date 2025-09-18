# pertwelfs REDOX keyboard layout

My REDOX layout 

## Adjusting layout instructions

Change layout to your liking
```
https://config.qmk.fm
```
### Update layout picture

in qutebrowser print to pdf using chrome backend (--pdf): 
```
:print --pdf /home/portwolf/qmk_firmware/keyboards/redox/keymaps/portwolf/layout.pdf 
```
after download convert all PDF pages to layout.png (quotes required w/zsh) w/imagemagick : 
```
magick -density 300 'layout.pdf[0-]' -resize 1024x -append layout.png
```
```

### Build and Flash
Download .json file (keymap.json) from the configurator website and place it in:
```
qmk_firmware/keyboards/redox/keymaps/portwolf/keymap.json
```
Compile the firmware w/adjusted layout
```
qmk compile (buildenv. set)
```
Compile .hex file and look for /dev/ttyUSB0 dev (kb) - ready, and waiting to flash
```
qmk flash
```
Put redox into bootloader mode . 
```
right half 'thumbcluster-upper-right' + left-half 'q' / right-hand 'p'
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
![current layout](https://github.com/portwolf/qmk_firmware/blob/portwolf/keyboards/redox/keymaps/portwolf/layout.png)
