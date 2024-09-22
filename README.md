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
I decided to make my own folder for everything needed for configuring and flashing a keymap onto a microcontroller and Thumbsup keyboard.
The original qmk_firmware repository is quite large, and has hundreds of keyboards on it that you do not need the files to.
I would recommend manually copying the folders that you need for the keyboards you have into a local qmk_firmware repository.
Save you space, save you time, and be less bothered by downloading a ton of code/files you don't realistically need.
Plus, someone getting into the keyboard making hobby might not be a programmer or is new to GitHub.
I don't want people getting intimidated and giving up.
Some people may not be too interested in coding, but still need to learn a little bit to get by.
