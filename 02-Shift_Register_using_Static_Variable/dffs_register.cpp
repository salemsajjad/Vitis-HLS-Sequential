#include "dffs_register.h"


void dffs_register(bool d, ap_uint<3> &q) {
#pragma HLS INTERFACE ap_none port=d
#pragma HLS INTERFACE ap_none port=q
#pragma HLS INTERFACE ap_ctrl_none port=return


	static ap_uint<3> reg = 0b000;


	reg = reg >> 1;
	reg[2] = d;


	q = reg;

}
