#include <iostream>

template <typename Type> void 
swap_data(Type &data1, Type &data2) {
	Type intermediery{};
	intermediery = data1;
	data1 = data2;
	data2 = intermediery;
}


int swap_em_up() {
	int x{ 10 }, y{ 20 };
	swap_data(x, y);
	std::cout << y << " " << x;
	return 0;
}