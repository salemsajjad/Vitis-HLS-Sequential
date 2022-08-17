#include "right_rotate_with_load-tb.h"
#include <iostream>
#include <bitset>


int main() {
	int status = 0;

	ap_uint<N> data_in;
	bool load;
	bool rotate;
	ap_uint<N> data_out;


	data_in = 0x34;
	load    = 1;
	rotate  = 0;
	right_rotate_with_load(data_in, load, rotate, data_out);
	std::cout << " data_in = "  << std::setfill ('0') << std::setw (N) << (std::bitset<N>)data_in
			  << " load = "     << load
			  << " rotate = "   << rotate
			  << " data_out = " << std::setfill ('0') << std::setw (N) << (std::bitset<N>)data_out
			  << std::endl;
	//Note: setfill() and setw() function is optional and if we don't use these, there will be no change.

	load   = 0;
	rotate = 1;
	for ( int i = 0 ; i < 10; i++) {
		right_rotate_with_load(data_in, load, rotate, data_out);
		std::cout << " data_in = "  << std::setfill ('0') << std::setw (N) << (std::bitset<N>)data_in
				  << " load = "     << load
				  << " rotate = "   << rotate
				  << " data_out = " << std::setfill ('0') << std::setw (N) << (std::bitset<N>)data_out
				  << std::endl;

	}




	return status;
}
