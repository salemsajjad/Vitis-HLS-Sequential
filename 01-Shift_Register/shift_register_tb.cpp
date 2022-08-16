#include "shift_register_tb.h"
#include <iostream>



int main() {

	int status  = 0;

	bool d;
	bool q1;
	bool q2;
	bool q3;


	std::cout << "d| q1, q2, q3 " << std::endl;
	std::cout << "--------------" << std::endl;


	d = 1;
	dffs(d, q1, q2, q3);
	std::cout << d << "| " << q1 << ",  " <<  q2 << ",  " <<  q3  << std::endl;

	d = 1;
	dffs(d, q1, q2, q3);
	std::cout << d << "| " <<  q1 << ",  " <<  q2 << ",  " <<  q3  << std::endl;

	d = 0;
	dffs(d, q1, q2, q3);
	std::cout << d << "| " <<  q1 << ",  " <<  q2 << ",  " <<  q3  << std::endl;

	d = 1;
	dffs(d, q1, q2, q3);
	std::cout << d << "| " <<  q1 << ",  " <<  q2 << ",  " <<  q3  << std::endl;

	d = 0;
	dffs(d, q1, q2, q3);
	std::cout << d << "| " <<  q1 << ",  " <<  q2 << ",  " <<  q3  << std::endl;


	std::cout << "--------------" << std::endl;



	return status; // the test bench function should return zero when the test is successful.

}
