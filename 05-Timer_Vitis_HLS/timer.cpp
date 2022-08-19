#include "timer.h"

typedef enum{idle, running} timer_state_type;
void timer(ap_uint<N> n, bool start, bool &end) {
	#pragma HLS INTERFACE ap_none port=start
	#pragma HLS INTERFACE ap_none port=end
	#pragma HLS INTERFACE ap_none port=n
	#pragma HLS INTERFACE ap_ctrl_none port=return

	static timer_state_type state = idle;
	static unsigned long long int timer_variable = 0;


	timer_state_type       next_state;
	unsigned long long int next_timer_variable;

	bool end_local;

	switch(state) {
	case idle:
		if (start == 1) {
			next_state     = running;
			end_local = 0;
			next_timer_variable = 0;
		} else {
			next_state     = idle;
			end_local = 0;
			next_timer_variable = 0;
		}

		break;

	case running:

		if (timer_variable == n-1) {
			next_state          = idle;
			end_local           = 1;
			next_timer_variable = 0;
		} else {
			next_timer_variable = timer_variable + 1;
			next_state          = running;
			end_local           = 0;
		}
		break;

	default:
		break;
	}

	state          = next_state;
	timer_variable = next_timer_variable;
	end            = end_local;


}
