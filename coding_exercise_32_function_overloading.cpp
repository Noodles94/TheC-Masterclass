#include <iostream>
#include <string>

double add(double a, double b) {
    return a + b;
}
std::string add(std::string& a, std::string& b) {
    return a + b;
}
const char* add(char* a, const char* b) {
    return a;
    //return std::strcat(a, b);
}

void stitch_them() {
    char name[20]{ "The sky" };
    auto result_str = add(name, " is blue");
    std::cout << "result_str : " << result_str;
}


int function_overloading() {
    stitch_them();
    return 0;
}
