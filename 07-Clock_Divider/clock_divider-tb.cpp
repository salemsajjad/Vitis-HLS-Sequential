
#include "clock_divider-tb.h"
#include <iostream>

int main() {

	int status = 0;

	bool slow_clock_signal;
	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 100; i++) {
		clock_divider(slow_clock_signal);
		std::cout << slow_clock_signal;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	return status;
}


