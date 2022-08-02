#include <string>
#include <iostream>


std::string who_s_the_greatest(std::string data[], unsigned int size) {
    std::string result;
    if (!data->empty())
        result = data[0];

    //Don't modify anything above this line
    //Your code will go below this line
    for (size_t i { 0 }; i < size; ++i){ 
        if (result < data[i])
            result = data[i];
    }
    //Your code will go above this line
    //Don't modify anything below this line

    return result;
}
int who_is_the_greatest() {
    std::string input[]{ "I", "am", "the", "king", "of", "the", "jungle" };
    who_s_the_greatest(input, 7);
    return 0;
}