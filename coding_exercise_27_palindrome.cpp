#include <iostream>
#include <string>

bool is_palindrome(unsigned long long int num) {
	if (num == 0)
		return false;

	std::string num_s{ std::to_string(num) };

	while (!num_s.empty()) {
		if (num_s.front() != num_s.back())
			return false;
		num_s = num_s.substr(1, num_s.size() - 2);

	}
	return true;
}

bool is_palindromes(unsigned long long int num)
{
    int temp= num; // Will hold temporary nums as we strip off digits
    int remainder;
    unsigned long long int reversed = 0;

    while (temp > 0)
    {
        remainder = temp % 10; //2 3 4 3 2 1
        reversed = (reversed * 10) + remainder; //2 23 234 2343 23432 234321
        temp = temp / 10; //12343 1234 123 12 1 0
    }
    if (reversed == num)
        return true;
    else
        return false;
}
int palindromes() {
	std::cout << std::boolalpha;
	std::cout << is_palindrome(123432);
	return 0;
}