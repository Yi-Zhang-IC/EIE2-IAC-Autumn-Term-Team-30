#!/bin/sh

top=pcounter

rm -rf obj_dir
rm -f *.vcd

verilator --top-module ${top} -Wall --cc --trace *.sv --exe ${top}_tb.cpp

make -j15 -C obj_dir/ -f V${top}.mk

# ls /dev/ttyUSB* > vbuddy.cfg

./obj_dir/V${top}
