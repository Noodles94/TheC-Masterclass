
template <typename T> int hunt_down(const T &value, const T * collection, unsigned int size) {
	for (unsigned int i{}; i < size; ++i) {
		if (collection[i] == value)
			return i;
	}
	return -1;
}

/*
int hunt_down(const char* value, const char** collection, unsigned int size) {
	for (unsigned int i{ 0 }; i < size; ++i) {
		if (std::strcmp(collection[i], value) == 0)
			return i;
	}
	return -1;
}
/*
template <>
int hunt_down<const char*>(const char* value, const char** collection, unsigned int size) {
	for (unsigned int i{ 0 }; i < size; ++i) {
		if (std::strcmp(collection[i], value) == 0)
			return i;
	}
	return -1;
}
*/


int hunting_() {
	return 0;
}