#include <iostream>
template <unsigned int array_size, typename T>
int find_value( T *collection, T value_to_find ) {
	for (unsigned int i{ 0 }; i < array_size; ++i) {
		if (value_to_find == collection[i])
			return i;
	}
	return -1;
}


int find_em_values() {

	return 0;
}