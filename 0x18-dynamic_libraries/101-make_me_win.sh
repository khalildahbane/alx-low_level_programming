#!/bin/bash
wget -P /tmp https://raw.github.com/khalildahbane/alx-low_level_programming/raw/master/0x18-dynamic_libraries/randomx.so
export LD_PRELOAD=/tmp/randomx.so