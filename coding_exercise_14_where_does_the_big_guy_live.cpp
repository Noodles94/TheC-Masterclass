#include <iostream>
int* maximum_address(int data[], unsigned int size) {

	int* max_address{};
	int zero{ 0 };
	max_address = &zero;

	//Don't modify anything above this line
	//Your code will go below this line

	for (size_t i{ 0 }; i < size; ++i) {
		if (data[i] > *max_address)
			max_address = &data[i];
	}

	//Your code should go above this line
	//Don't modify anything after this line
	return max_address;
}

int where_does_the_big_guy_live() { //entry point
	int arr[10]{ 10,2,4,5,12,11,3,4,5,6 };
	std::cout << *maximum_address(arr, 10);
	return 0;
}