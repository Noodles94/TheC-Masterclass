#include <string>
#include <iostream>

unsigned int digit_sum(unsigned int num) {
	unsigned int result {};
	for (char c : std::to_string(num)) {
		result += c - '0'; //convert character to int
	}
	return result;
}


int sum_up_the_digtis() {
	std::cout << digit_sum(79);
	return 0;
}