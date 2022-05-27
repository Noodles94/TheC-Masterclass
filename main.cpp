#include <iostream>

consteval int get_value() {
	return 2;
}

int main() {
	constexpr int value = get_value();
	std::cout << "value: " << value << std::endl;
	return 0;
}