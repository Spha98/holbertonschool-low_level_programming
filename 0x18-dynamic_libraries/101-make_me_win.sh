#!/bin/bash
wget -p .. https://github.com/Spha98/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
