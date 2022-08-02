#include <iostream>

void replace_spaces(char data[], unsigned int size) {

    char* result = new char[size];
    //Don't modify anything above this line
    //Your code should go below this line
    for (size_t i{ 0 }; i < size; ++i) {
        if (std::isblank(data[i])) {
            result[i] = '_';
        }
        else {
            result[i] = data[i];
        }
    }
    std::cout << "After replacing the spaces, we get : " << result;
    delete[] result;
    result = nullptr;
    //Your code should go above this line
    //Don't modify anything below this line
}

int hunt_them_and_replace_them() { //entry point
    char message[]{ "John was 8 years old at the time." };
    replace_spaces(message, std::size(message));

    return 0;
}