#include <iostream>

void debouncer(bool sw, bool &out);

int main() {

	int status = 0;

	bool sw;
	bool out;
	
	// keep input logic level stable at 0
	for (int i = 0; i < 5000; i++) {
		sw = 0;
		debouncer(sw, out);
	}
	
	// Now, we want to generate bouncing on input sw
	for (int i = 0; i < 250; i++) {
		sw = 0;
		debouncer(sw, out);
		sw = 1;
		debouncer(sw, out);
	}
	
	// keep input logic level stable at 1
	for (int i = 0; i < 5000; i++) {
		sw = 1;
		debouncer(sw, out);
	}

	// Then, we generate bouncing on input sw
	for (int i = 0; i < 250; i++) {
		sw = 1;
		debouncer(sw, out);
		sw = 0;
		debouncer(sw, out);
	}

	// Finally, we keep input logic level stable at 1
	for (int i = 0; i < 5000; i++) {
		sw = 0;
		debouncer(sw, out);
	}



	return status;

}
