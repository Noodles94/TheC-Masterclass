#include <iostream>
void is_sum_even(int data[], unsigned int size, bool& result) {
	int sum{};
	for (unsigned int i{ 0 }; i < size; ++i) {
		sum += data[i];
	}
	result = (sum % 2 == 0);
}

int even_sums(int argc, char **argv) { //array of characterpointers
	bool result{};
	int * nums = new int[10]{2,2,2,2,2,2,2,2,2,3};
	is_sum_even(nums, 10, result);
	delete[]nums;
	nums = nullptr;
	std::cout << std::boolalpha << result;
	return 0;
}