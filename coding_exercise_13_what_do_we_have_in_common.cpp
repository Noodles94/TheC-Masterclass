#include <iostream>

int what_do_we_have_in_common() { //entry point
	int data1[10]{ 1,2,4,5,9,3,6,7,44,55 };
	int data2[10]{ 11,2,44,45,49,43,46,47,55,88 };
	int common_numbers[20];
	int common_numbers_counter{ 0 };

	for (int comparing_number1{0}; comparing_number1 < std::size(data1); ++comparing_number1) {
		for (int comparing_number2{0}; comparing_number2 < std::size(data2); ++comparing_number2) {
			if (data1[comparing_number1] == data2[comparing_number2]) {
				bool common_number_already_exists = false;
				for (int common_number{ 0 }; common_number < common_numbers_counter; ++common_number) {
					if (data1[comparing_number1] == common_numbers[common_number])
						common_number_already_exists = true;
					break;
				}
				if (!common_number_already_exists) {
					common_numbers[common_numbers_counter++] = data1[comparing_number1];
					break;
				}
			}
		}
	}
	if (common_numbers_counter == 0)
		std::cout << "There are 0 common elements";
	else {
		std::cout << "There are " << common_numbers_counter << " common elements they are : ";
		for (int i = 0; i < common_numbers_counter; ++i) {
			std::cout << common_numbers[i] << " ";
		}
	}
	return 0;
}