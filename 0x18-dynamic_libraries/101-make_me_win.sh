#!/bin/bash
wget -P https://github.com/otmane0/alx-low_level_programming/raw/master/0x18-dynamic_libraries/full_lib.so
export LD_PRELOAD=/tmp/full_lib.so
