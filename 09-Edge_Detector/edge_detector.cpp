/************************************************
Copyright (c) 2021, Mohammad Hosseinabady
	mohammad@highlevel-synthesis.com.
	https://highlevel-synthesis.com/

All rights reserved.
************************************************/
#include "edge_detector.h"



void edge_detector(bool input_signal, bool &rising_edge, bool &faling_edge) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE ap_none port=input_signal
#pragma HLS INTERFACE ap_none port=rising_edge
#pragma HLS INTERFACE ap_none port=faling_edge



	static bool previous_input_signal = 0;



	if (previous_input_signal == 0 && input_signal == 1) {
		rising_edge = 1;
		faling_edge = 0;
	} else if (previous_input_signal == 1 && input_signal == 0) {
		rising_edge = 0;
		faling_edge = 1;
	} else {
		rising_edge = 0;
		faling_edge = 0;
	}

	previous_input_signal = input_signal;
}



