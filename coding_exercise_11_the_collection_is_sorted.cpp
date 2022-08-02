#include <iostream>

int the_collection_is_sorted() { //entry point
	int last_num = 0;
	bool sorted{ true };
	int data[]{ 1,2,3,4,4};
	for(auto current_number : data) {
		if (current_number <= last_num) {
			sorted = false;
			break;
		}
		last_num = current_number;
	}
	std::cout << sorted;
	return 0;
}