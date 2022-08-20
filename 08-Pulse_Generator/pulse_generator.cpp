#include "pulse_generator.h"

typedef enum{w1, w0} pulse_gen_states_type;

void pulse_generator(bool input, bool &pulse) {
#pragma HLS INTERFACE ap_none port=input
#pragma HLS INTERFACE ap_none port=pulse
#pragma HLS INTERFACE ap_ctrl_none port=return


	static pulse_gen_states_type state = w1;


	pulse_gen_states_type next_state;
	bool next_pulse;

	switch(state) {
	case w1:
		if (input == 1) {
			next_state  = w0;
			next_pulse = 1;
		} else {
			next_state  = w1;
			next_pulse = 0;
		}
		break;
	case w0:
		if (input == 1) {
			next_state = w0;
			next_pulse = 0;
		} else {
			next_state = w1;
			next_pulse = 0;
		}
		break;
	default:

		break;
	}

	state = next_state;
	pulse = next_pulse;

}
