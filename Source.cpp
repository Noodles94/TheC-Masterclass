#include <iostream>
#include <string>


template<std::integral T>
T add(T a, T b) {
	return a + b;
}
template <typename T>
requires std::integral<T> 
T add4(T a, T b) {
	return a + b;
}

auto add2(std::integral auto a, std::integral auto b) {
	return a + b;
}

template<typename T>
T add3(T a, T b) requires std::is_integral_v<T> {
	return a + b;
}

template <typename T>
concept Multipliable = requires(T a, T b) {
	a* b;
};

template <typename T>
T multiply(T a, T b) requires Multipliable<T>{
	return a * b;
}
int main() {

	int a{ 2 }, b{ 3 };
	std::string string_a{ "Hello" };
	//std::cout << add(a, b);
	//std::cout << add(string_a, string_a);
	std::cout << add2('a', 2);
	return 0;
}