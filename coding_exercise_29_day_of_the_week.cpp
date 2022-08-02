#include <iostream>
enum class Month : unsigned char{
	Jan = 1, January = Jan, Feb, Mar, //Int represents enums, Jan = 1, Feb = 2. Default is Jan = 0, Feb = 1.
	Apr
};
enum class DayOfWeek : unsigned char {
    Mon = 1, Monday = Mon, Tue, Tuesday = Tue, Wed, Wednesday = Wed,
    Thu, Thursday = Thu, Fri, Friday = Fri, Sat, Saturday = Sat, Sun, Sunday = Sun
};
void print_day(DayOfWeek day) {
    switch (day) {
    case DayOfWeek::Monday:
        std::cout << "Today is Monday";
        break;

    case DayOfWeek::Tuesday:
        std::cout << "Today is Tuesday";
        break;

    case DayOfWeek::Wednesday:
        std::cout << "Today is Wednesday";
        break;

    case DayOfWeek::Thursday:
        std::cout << "Today is Thursday";
        break;

    case DayOfWeek::Friday:
        std::cout << "Today is Friday";
        break;

    case DayOfWeek::Saturday:
        std::cout << "Today is Saturday";

    case DayOfWeek::Sunday:
        std::cout << "Today is Sunday";
        break;

    default:
        std::cout << "No day";
    }
}

int day_of_the_week() {
    DayOfWeek day{ DayOfWeek::Monday };
    print_day(DayOfWeek::Monday);
    return 0;
}