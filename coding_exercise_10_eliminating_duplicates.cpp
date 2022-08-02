

#include <iostream>

int eliminating_duplicates() //entry point
{   
    int numbers[]{ 1,2,4,5,1,8,2,3,6,1,4,2 };
    int no_duplicates[20];

    size_t counter{ 0 };
    //find the all the unique numbers
    for (int current_number = 0; current_number < 12; ++current_number) {
        bool already_exist{ false };

        for (int checking_number = 0; checking_number < counter; ++checking_number) {
            if (no_duplicates[checking_number] == numbers[current_number]) {
                already_exist = true;
                break;
            }
        }


        if (!already_exist) {
            no_duplicates[counter++] = numbers[current_number];
        }
    }
    std::cout << "The collection contains " << counter << " unique numbers, they are : ";
    for (unsigned int i{0}; i < counter; i++)
        std::cout << no_duplicates[i] << " ";
    return 0;
}
