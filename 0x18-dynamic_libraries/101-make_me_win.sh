#!/bin/bash  
wget -P /tmp https://github.com/MarioOse/alx-low_level_programming.git/raw/main/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so 
chmod u+x 101-make_me_win.sh
git add .
git commit -m "My commit message"
git push
