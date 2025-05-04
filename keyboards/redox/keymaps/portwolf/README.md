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
after download convert w/imagemagick: 
```
magick -density 300 -quality 100 -background white -alpha remove layout.pdf -resize 1024x layout.png
```
combine all output files to one png: 
```
magick layout-{0,1,2..n}.png layout.png
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
Put redox into bootloader mode . 
```
right half 'thumbcluster-upper-right' + left-half 'q' / right-hand 'p'
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
![current layout](https://github.com/portwolf/qmk_firmware/blob/portwolf/keyboards/redox/keymaps/portwolf/layout.png)
