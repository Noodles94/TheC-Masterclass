#include <iostream>
int hunt_for_vowels() { //entry point
	unsigned int vowel_count{0};//Initialized to zero
	char message[]{ "The sky is blue my friend" };
	for (auto character : message) {
		if (character == 'a' || character == 'A' ||
			character == 'e' || character == 'E' ||
			character == 'u' || character == 'U' ||
			character == 'i' || character == 'I' ||
			character == 'o' || character == 'O') {
			++vowel_count;
		}
	}
	std::cout << vowel_count;
	return 0;
}