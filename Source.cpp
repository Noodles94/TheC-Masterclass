#include <string>
#include <iostream>
template <typename T>
concept convertible_to_std_string = requires (T a) {
	std::to_string(a);
};

template <typename T>
requires convertible_to_std_string<T>
std::string concatenate(T first_value, T second_value) {
	return std::to_string(first_value) + std::to_string(second_value);
}




int main() {
	double a{ 22.22 };
	double b{ 33.33 };
	auto result = concatenate(22, 33);
	std::cout << result << std::endl;
	std::cout << concatenate(a, b);
	return 0;
}