//#define DELAY_COUNTER  500000L
#define DELAY_COUNTER  500L //only for simulation

typedef enum{transfer, delay} debouncer_states_type;

void debouncer(bool sw, bool &out) {
#pragma HLS INTERFACE ap_none port=sw
#pragma HLS INTERFACE ap_none port=out
#pragma HLS INTERFACE ap_ctrl_none port=return


	// these static variables will be synthesizesd as registers in the hardware.
	static debouncer_states_type state = transfer;
	static unsigned long long int counter = DELAY_COUNTER;

	static bool previous_sw = 0; // It keeps previous state(0 or 1) of input signal to find edges in iput.
	
	//-------- temporary variables ----------------
	unsigned long long int next_counter;
	debouncer_states_type next_state;
	bool out_tmp = 0;

	switch(state) {
	case transfer:
		if (previous_sw != sw) {
			next_state = delay;
		} else {
			next_state = transfer;
		}
		next_counter = DELAY_COUNTER;
		out_tmp     = sw; // sw input is connected to the output.
		break;
	case delay:
		if (counter == 0) {
			next_state   = transfer;
			next_counter = DELAY_COUNTER;
		} else {
			next_counter = counter - 1;
			next_state   = delay;
		}
		out_tmp     = previous_sw;

		break;

	default:
		break;
	}

	previous_sw = out_tmp;
	state = next_state;
	counter = next_counter;
	out = out_tmp;

}


