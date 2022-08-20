#include "edge_detector-tb.h"
#include <iostream>



int main() {
	int status = 0;

	bool input_signal;
	bool rising_edge;
	bool faling_edge;

	for (int i = 0; i < 10; i++) {
		input_signal = 0;
		edge_detector(input_signal, rising_edge, faling_edge);
		std::cout << " input_signal = " << input_signal << " rising_edge = " << rising_edge <<  " faling_edge = " << faling_edge << std::endl;
	}

	for (int i = 0; i < 10; i++) {
		input_signal = 1;
		edge_detector(input_signal, rising_edge, faling_edge);
		std::cout << " input_signal = " << input_signal << " rising_edge = " << rising_edge <<  " faling_edge = " << faling_edge << std::endl;
	}


	for (int i = 0; i < 10; i++) {
		input_signal = 0;
		edge_detector(input_signal, rising_edge, faling_edge);
		std::cout << " input_signal = " << input_signal << " rising_edge = " << rising_edge <<  " faling_edge = " << faling_edge << std::endl;
	}



	return status;
}
