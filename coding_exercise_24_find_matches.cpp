#include <iostream>
#include <string>

void find_matches(std::string data[], unsigned int size, const char* key) {

    std::string* matches = new std::string[size]; // Create std::string array on the heap. Remember to release
    //Don't modify anything above this line
    //Your code should go below this line
    unsigned int found_counter{};
    unsigned int found_indexes[10];

    for (size_t i{ 0 }; i < size; ++i) {
        if (data[i].find(key) != std::string::npos) {
            found_indexes[found_counter++] = i;
        }
    }
    std::cout << "Found " << found_counter << " matches." << " They are: ";
    for (size_t i{ 0 }; i < found_counter; ++i) {
        if(found_counter - 1 != i)
            std::cout << data[found_indexes[i]] << " ";
        else {
            std::cout << data[found_indexes[i]];
        }
    }
    //Your code should go above this line
    //Don't modify anything below this line


    delete[] matches; // Remember to release the memory.

}

int find_matches() { //entry point
    std::string input[]{ "catching,", "iteration", "fresh", "iterative", "outside", "mercy" };
    const char* key{ "iter" };
    find_matches(input, 6, key);
    return 0;
}