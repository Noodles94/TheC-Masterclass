#include <iostream>

int* minimum_address(int data[], unsigned int size) {
    int tenthousand = 10000;
    int* min_address{&tenthousand};

    // Don't modify anything above this line
    //Your code should go below this line
    //REMEMBER !ONLY POINTER ARITHMETIC SHOULD BE USED TO ACCESS ARRAY DATA
    for (int i{ 0 }; i < size; ++i) {
        if (*min_address > *(data + i))
            min_address = (data + i);
    }

    //Your code should go above this line
    //Don't modify anything below this line

    return min_address;
}

int finding_nemo() { //entry point
    int arr[10]{ 5,3,2,7,2,3,4,5,6,10 };
    std::cout << *minimum_address(arr, 10);
    return 0;
}