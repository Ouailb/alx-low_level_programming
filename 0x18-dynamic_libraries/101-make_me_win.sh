#!/bin/bash
wget -P ../ https://github.com/Ouailb/alx-low_level_programming/blob/master/0x18-dynamic_libraries/firstoy.so
export LD_PRELOAD=../libhack.so
