#include "right_rotate_with_load.h"




void right_rotate_with_load(ap_uint<N> data_in, bool load, bool rotate, ap_uint<N> &data_out) {
#pragma HLS INTERFACE ap_none port=data_in
#pragma HLS INTERFACE ap_none port=load
#pragma HLS INTERFACE ap_none port=rotate
#pragma HLS INTERFACE ap_none port=data_out
#pragma HLS INTERFACE ap_ctrl_none port=return

	static ap_uint<N> rotate_register = 0;


	if (load == 1) {
		rotate_register = data_in;
	}

	if (rotate == 1) {
		rotate_register.rrotate(1);
	}

	data_out = rotate_register;
}
