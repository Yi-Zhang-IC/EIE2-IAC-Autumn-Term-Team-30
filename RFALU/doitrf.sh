rm  -rf obj_dir
rm -r RF.vcd 

verilator -Wall --cc --trace RF.sv --exe RF_tb.cpp

make -j -C obj_dir/ -f VRF.mk VRF

obj_dir/VRF
