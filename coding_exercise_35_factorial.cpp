#include <iostream>


unsigned int factorial(int number) {
	if (number > 0)
		return number * factorial(number - 1);
	return 1;
}
unsigned int factorial_loop(int number) {
	int sum = 1;
	for (size_t i{ 1 }; i <= number; ++i) {
		sum = sum * i;
	}
	return sum;
}
int fact() {
	constexpr int FACTORIAL_NUM{ 8 };
	std::cout <<"Loopresult: "<< factorial_loop(FACTORIAL_NUM) << " \n" << "Recursion result: "<< factorial(FACTORIAL_NUM);
	return 0;
}