
#include <iostream>


void merge_arrays(int data1[], int data2[],
    unsigned int size1, unsigned int size2) {

    //Don't modify anything above this line
    //Your code will go below this line

    int *merged_array = new int[size1 + size2];
    for (unsigned int i{}; i < (size1 + size2); ++i) {
        if (i < size1)
            merged_array[i] = data1[i];
        else {
            merged_array[i] = data2[i - size1];
        }
    }
    for (unsigned int i{}; i < (size1 + size2); ++i) {
        std::cout << merged_array[i] << " ";
    }

    delete[] merged_array;
    merged_array = nullptr;

    //Your code will go above this line
    //Don't modify anything below this line


}
int merge_them  () {//entry point
    int arr1[7]{ 1,2,3,4,5,66,77 };
    int arr2[6]{ 10,20, 30, 40, 50, 60 };
    merge_arrays(arr1, arr2, 7, 6);
    return 0;
}
