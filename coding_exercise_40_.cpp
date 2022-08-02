#include <string>
#include <iostream>


template <typename ReturnType, typename T, typename P>
ReturnType concatenate(T front_concat, P back_concat) {
	return std::to_string(front_concat) + std::to_string(back_concat);
}

int find_em_valuess() {
	int a{2};
	double b{ 3.2 };
	std::cout << concatenate<std::string>(a, b);
	
	return 0;
}