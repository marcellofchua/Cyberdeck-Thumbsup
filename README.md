# Cyberdeck-Thumbsup
Files for my Thumbsup Cyberdeck project.
I bought the v5 and two v8 Thumbsup Keyboard PCBs directly from https://www.etsy.com/shop/ThumbsUpKeyboards.
Instructions already exist, but they are not beginner-friendly.
Expect an update on this repository to include instructions on how to edit the keyboard layout and flash a microcontroller.
Soldering and 3D printing instructions will also be included.

# My files and work.
I made the 3D models for the Cyberdeck-Thumbsup Project from scratch by prototyping and priting.
I have 3D printed these models and confirmed they do work.
Pictures will be going up.
3D models were printed on an Ender 3 with PLA filament.
Ultimaker Cura was used to slice the .stl files into .gcode files.

# Thumbsup files from qmk_firmware
This should be a fork of an old branch on qmk_firmware, but I have yet to get a Git clone of the original branch with the Thumbsup folder in it to suck down properly.
For whatever reason, Thumbsup was removed from the main branch on qmk_firmware's Git repository.
These are NOT all the files you need to have the qmk_firmware.
You still need to clone the qmk_firmware somewhere.
You will need to drop the entire 'thumbsup' folder into your qmk_firmware folder.

# FOLDER STRUCTURE
Below are examples of where the thumbsup folder goes after you clone qmk_firmware.

/home/username/qmk_firmware/keyboards/thumbsup/keymaps/default_5x12_v5_via/
c:\users\username\keyboards\thumbsup\keymaps\default_5x12_v5_via\
- keymap.c
- readme.md
- rev5_promicro_unibody_5x12_via.json
- rules.mk

/home/username/qmk_firmware/
- thumbsup_rev5_promicro_unibody_5x12_default_5x12_v5_via.hex

c:\users\username\qmk_firmware\
- thumbsup_rev5_promicro_unibody_5x12_default_5x12_v5_via.hex
