#include <iostream>
unsigned int CALL_TIMES{ 0 };
void func() {
    //YOUR CODE WILL GO BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    std::cout << ++CALL_TIMES << " ";
    //YOUR CODE SHOULD GO ABOVE THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE
}

void do_work(unsigned int n) {
    for (unsigned int i{ 0 }; i < n; ++i) {
        func();
    }
}

int self_track_func() {
    do_work(3);
    return 0;
}