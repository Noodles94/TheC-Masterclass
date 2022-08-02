#include <iostream>
int contains_character(const char* str, unsigned int size, char c) {
	for (unsigned int i{ 0 }; i < size; ++i) {
		if (*(str + i) == c) {
			return i;
		}
	}
	return -1;
}
void find_character(const char* str, unsigned int size, char c) {
	unsigned int index = contains_character(str, size, c);
	if (index != -1) {
		std::cout << "Found character " << c << " at index " << index;
	}
	else {
		std::cout << "Could not find the character " << c << " in " << str;
	}
}

int who_has_character() {
	char message[]{ "Hello there" };
	find_character(message, 11, 't');
	return 0;
}