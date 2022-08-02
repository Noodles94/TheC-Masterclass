#include <iostream>


int pointer_fun() {
	int* int_pojnter{ nullptr };
	std::cout << "Adress of pointer : " << int_pojnter << std::endl;
	//std::cout << "Value of dereferenced pointer : " << *int_pojnter << std::endl <<std::endl;
	int value{ 39 };
	int_pojnter = &value;
	std::cout << "Adress of pointer : " << int_pojnter << std::endl;
	std::cout << "Value of dereferenced pointer : " << *int_pojnter << std::endl << std::endl;
	const int* const poj{&value};
	std::cout << "Adress of pointer : " << poj << std::endl;
	std::cout << "Value of dereferenced pointer : " << *poj << std::endl << std::endl;
	const int* poojn{};
	int num{ 10 };
	poojn = &num;
	//*poojn = 20;
	std::cout << num << std::endl;
	num = 20;
	std::cout << num << std::endl;

	return 0;
}