#include <iostream>
int odd() {
	static int current_num{ 0 };
	while (true) {
		++current_num;
		if (current_num % 2 != 0)
			return current_num;
	}
}
void print_odds(unsigned int count) {
	for (unsigned int i{ 0 }; i < count; ++i) {
		std::cout << odd() << " ";
	}
}
int odd_series() {
	print_odds(5);
	return 0;
}