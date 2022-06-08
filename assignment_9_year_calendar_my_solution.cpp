#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

constexpr size_t MONTHS_PER_YEAR{ 12 };
constexpr size_t WIDTH{ 5 };
const std::vector<std::string> MONTH_NAMES{"January", "February", "Mars", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
std::vector<size_t>MONTH_SIZES{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


bool is_leap_year(size_t year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

void print_years(size_t year, size_t first_day) {
    is_leap_year(year) ? MONTH_SIZES[1] = 29 : MONTH_SIZES[1] = 28;
    std::cout << "Calender for " << year << std::endl;
    for (size_t current_month{ 0 }; current_month < MONTHS_PER_YEAR; ++current_month) {
        std::cout << "--" << MONTH_NAMES[current_month] << " " << year << " --" << std::endl;
        std::cout << std::setw(WIDTH) << "Mon" 
            << std::setw(WIDTH) << "Tue" 
            << std::setw(WIDTH) << "Wed" 
            << std::setw(WIDTH) << "Thu" 
            << std::setw(WIDTH) << "Fri" 
            << std::setw(WIDTH) << "Sat" 
            << std::setw(WIDTH) << "Sun" 
            <<std::endl;

        std::cout << std::setw(WIDTH * (first_day - 1)) << "";

        for (size_t current_day_in_month{ 1 }; current_day_in_month <= MONTH_SIZES[current_month]; ++current_day_in_month) {
            std::cout << std::setw(WIDTH) <<std::right << current_day_in_month;
            if ((current_day_in_month + first_day -1) % 7 == 0)
                std::cout << std::endl;
        }
        first_day = (MONTH_SIZES[current_month] + first_day) % 7;
        if (first_day == 0)
            first_day = 7;

        std::cout << std::endl << std::endl;
    }
}

int year_calendar() { //entry point
    while  (true) {
        std::cout << "Enter a year : ";
        size_t year{ 0 };
        std::cin >> year;
        if (!std::cin) {
            std::cin.clear();// reset failbit
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//skip bad input
            std::cout << "BAD INPUT : PLEASE PUT IN A NUMBER" << std::endl; 
            continue;
        }
        std::cout << "Enter the first day of the year [1: Monday, ... 7: Sunday]: ";
        size_t first_day{ 0 };
        std::cin >> first_day;
        std::cout << std::endl << std::endl;
        if (first_day < 1 || first_day > 7) {
            std::cout << "BAD INPUT : " << first_day << " PLEASE PUT IN A NUMBER WITHIN RANGE 1 - 7";
            continue;
        }
        print_years(year, first_day);
        std::cout << "Continue? Y/N : ";
        char check{ 0 };
        std::cin >> check;
        if (check != 'Y' && check != 'y')
            break;
    }
	return 0;
}