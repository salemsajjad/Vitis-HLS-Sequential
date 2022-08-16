#include "dffs_register-tb.h"


#include <iostream>



int main() {
	int status  = 0;



	bool      d;
	ap_uint<3> q;


	std::cout << "d,q " << std::endl;

	d = 1;
	dffs_register(d, q);
	std::cout << d << ", " << q.to_string()   << std::endl;


	d = 1;
	dffs_register(d, q);
	std::cout << d << ", " << q.to_string()   << std::endl;


	d = 0;
	dffs_register(d, q);
	std::cout << d << ", " << q.to_string()   << std::endl;


	d = 1;
	dffs_register(d, q);
	std::cout << d << ", " << q.to_string()   << std::endl;


	d = 0;
	dffs_register(d, q);
	std::cout << d << ", " << q.to_string()   << std::endl;




	return status;
}
