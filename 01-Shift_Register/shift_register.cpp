#include "shift_register.h"



void dffs(bool d, bool &q1, bool &q2, bool &q3) {
#pragma HLS INTERFACE ap_none port=d
#pragma HLS INTERFACE ap_none port=q1
#pragma HLS INTERFACE ap_none port=q2
#pragma HLS INTERFACE ap_none port=q3
#pragma HLS INTERFACE ap_ctrl_none port=return




	static bool dff1 = 0;
	static bool dff2 = 0;
	static bool dff3 = 0;


	// this assignment order is important.

	dff3 = dff2;
	dff2 = dff1;
	dff1 = d;



	q1 = dff1;
	q2 = dff2;
	q3 = dff3;
}
