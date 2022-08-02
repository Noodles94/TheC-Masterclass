#include <iostream>
#include <string>

void show_odds(unsigned long long int num) {

    unsigned int digit = 0;
    unsigned long long int inside_num = num;

    while (inside_num > 0) {
        digit = inside_num % 10;
        if (digit % 2 != 0) {
            std::cout << digit;
        }
        inside_num = inside_num / 10;

    }
}
int showing_the_odds() {
	show_odds(98723713);
	return 0;
}