#include "timer-tb.h"
#include <iostream>

int main() {

	int status = 0;

	ap_uint<N> n;
	bool       start;
	bool       end;

	n = 20;
	start = 0;
	for (int i = 0; i < 20; i++) {
		timer(n, start, end);
		std::cout << " start = " << start << " end = " << end << std::endl;
	}

	start = 1;
	timer(n, start, end);
	std::cout << " start = " << start << " end = " << end << std::endl;
	for (int i = 0; i < 50; i++) {
		start = 0;
		timer(n, start, end);
		std::cout << " start = " << start << " end = " << end << std::endl;
	}


	return status;
}
