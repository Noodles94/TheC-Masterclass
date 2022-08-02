#include <iostream>
const double* find_max_address(const double scores[], unsigned int count) {

    unsigned int max_index{};
    double max{scores[0]};

    for (unsigned int i{ 0 }; i < count; ++i) {
        if (scores[i] > max) {
            max = scores[i];
            max_index = i;
        }
    }
    return &scores[max_index];
}

int we_messed_up() {
    double array[]{ -3.0, -2.0, -5.0 };
    std::cout << *find_max_address(array, 3);
    return 0;
}