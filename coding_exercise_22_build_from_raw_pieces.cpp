#include <iostream>
#include <string>
std::string build_from_raw_pieces(const char* str1, const char* str2) {

    std::string result;

    //Don't modify anything above this line
    //Your code will go below this line
    //std::string start(str1), end(str2);
    //result = start + " " + end;
    result.append(str1).append(" ").append(str2);
    std::cout << result;
    //Your code will go above this line
    //Don't modify anything below this line
    return result;
}
int build_from_raw_pieces() {
    const char input1[]{"Hello there!"};
    const char input2[]{"How are you?"};
    build_from_raw_pieces(input1, input2);
	return 0;
}