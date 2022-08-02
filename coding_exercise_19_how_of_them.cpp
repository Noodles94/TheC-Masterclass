#include <iostream>

void find_stuf_out(char data[], unsigned int size) {

    unsigned int vowel_count{};
    unsigned int consonant_count{};

    //Don't modify anything above this line
    //Your code should go below this line
    for (size_t i{ 0 }; i < size; ++i) {
        if (std::isalpha(data[i])) {
            if (std::tolower(data[i]) == 'a' ||
                std::tolower(data[i]) == 'i' ||
                std::tolower(data[i]) == 'u' ||
                std::tolower(data[i]) == 'e' ||
                std::tolower(data[i]) == 'o'
                )
            {
                vowel_count++;
            }
            else if (std::isalpha(data[i])) {
                ++consonant_count;
            }
        }
    }

    std::cout << "The string contains " << vowel_count << " vowels and " << consonant_count << " consonants";
    //Your code should go above this line
    //Don't modify anything below this line
}

int how_many_of_them() { //entry point
    char message[]{ "John was 8 years old at the time." };
    find_stuf_out(message, std::size(message));

    return 0;
}