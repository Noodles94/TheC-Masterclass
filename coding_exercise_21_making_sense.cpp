
#include <iostream>
#include <cstring>

void extract_message(const char* src1, const char* src2,
    const char* src3, const char* src4) {

    char* result;
    result = new char[20]; // Dynamically allocate for space

    //Don't modify anything above this line
    //Your code will go below this line
    // Copy 'the' from src1
    /*
    std::strncpy(result, src1 + 15, 3);

    //Copy sky from src2
    std::strncpy(result + 3, src2 + 5, 4);

    //Copy 'is' from src3
    std::strncpy(result + 7, src3 + 10, 3);

    //Copy 'blue' from src4
    std::strncpy(result + 10, src4 + 3, 5);

    result[15] = '\0'; // Making sure the string is properly null terminated.

    std::cout << "result : " << result;
    //Your code will go above this line
    //Don't modify anything below this line
 
    delete[] result;
    */
}
int making_sense() { //entry point
    const char src1[]{ "will old space the replace" };
    const char src2[]{ "sense sky hit has" };
    const char src3[]{ "hello went is get" };
    const char src4[]{ "red blue yellow orange" };
    extract_message(src1, src2, src3, src4);
    return 0;
}