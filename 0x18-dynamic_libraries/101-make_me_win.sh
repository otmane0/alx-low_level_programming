#!/bin/bash
wget -P /home/othmane/alx/alx-low_level_programming/0x18-dynamic_libraries https://github.com/otmane0/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/home/othmane/alx/alx-low_level_programming/0x18-dynamic_libraries/libgiga.so:$LD_PRELOAD
