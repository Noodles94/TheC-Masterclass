#include <iostream>
#include <ctime>

int the_calculator() { //entry point
	std::cout << "Welcome to the greatest calculator on Earth!";
	std::srand(std::time(0));
	char end_char{ 0 };
	int num1{ 0 }, num2{ 0 }, op {0}, answer{0};
	const int RANDOM_NUMBER_INTERVALL = 200, RANDOM_OPERATOR_INTERVALL = 3;
	const char OPERATORS [3]{ '-', '+', '*'};
	const char START_WINNING_TEXT[50]{ "Congratulations! You got the result " }, END_WINNING_TEXT[20]{ " right!" }, LOSING_TEXT[50]{ "Naah! The correct result is : " };
	do {
		num1 = std::rand() % RANDOM_NUMBER_INTERVALL;
		num2 = std::rand() % RANDOM_NUMBER_INTERVALL;
		op = std::rand() % RANDOM_OPERATOR_INTERVALL;
		std::cout << "Whats the result of " << num1 << " " << OPERATORS[op] << " " << num2 << " : ";
		std::cin >> answer;
		switch (OPERATORS[op]) {
		case '-':
			num1 - num2 == answer ?
				std::cout << START_WINNING_TEXT << num1-num2 << END_WINNING_TEXT:
				std::cout << LOSING_TEXT << num1-num2;
				break;
		case '+':
			num1 + num2 == answer ?
				std::cout << START_WINNING_TEXT << num1 + num2 << END_WINNING_TEXT :
				std::cout << LOSING_TEXT << num1 + num2;
			break;
		case '*':
			num1 * num2 == answer ?
				std::cout << START_WINNING_TEXT << num1 * num2 << END_WINNING_TEXT :
				std::cout << LOSING_TEXT << num1 * num2;
			break;
		default:
			break;
		}
		std::cout << std::endl <<std::endl;
		std::cout << "Do you want me to try again? (Y | N) : ";
		std::cin >> end_char;


	} while (end_char== 'y'|| end_char=='Y');

	std::cout << "See you later!";
	return 0;
}