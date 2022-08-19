/************************************************
Copyright (c) 2021, Mohammad Hosseinabady
	mohammad@highlevel-synthesis.com.
	https://highlevel-synthesis.com/

All rights reserved.

************************************************/
#include "clock_divider.h"

#define CLOCK_FREQUENCY_DIVISOR  20

typedef enum{zero, one} clock_state_type;

void clock_divider(bool &slow_clock_signal) {
#pragma HLS INTERFACE ap_none port=slow_clock_signal
#pragma HLS INTERFACE ap_ctrl_none port=return



	static clock_state_type state = zero;
	static unsigned int     counter = CLOCK_FREQUENCY_DIVISOR /2-1;

	clock_state_type next_state;
	unsigned int     next_counter;

	bool slow_clock_signal_local;

	switch(state) {
	case zero:
		if (counter == 0) {
			next_counter       = CLOCK_FREQUENCY_DIVISOR /2-1;
			next_state         = one;
		} else {
			next_counter       = counter-1;
			next_state         = zero;
		}
		slow_clock_signal_local = 0;
		break;
	case one:
		if (counter == 0) {
			next_counter       = CLOCK_FREQUENCY_DIVISOR /2-1;
			next_state         = zero;
		} else {
			next_counter       = counter-1;
			next_state         = one;
		}
		slow_clock_signal_local = 1;
		break;
	default:
		break;
	}

	state = next_state;
	counter = next_counter;
	slow_clock_signal = slow_clock_signal_local;

}
