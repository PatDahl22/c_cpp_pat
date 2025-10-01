#include <iostream>
#include "if/if5.h"

void if5_trip_cost()
{
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Select your category by entering a number:" << std::endl;
    std::cout << "1. Adult" << std::endl;
    std::cout << "2. Pensioner" << std::endl;
    std::cout << "3. Student" << std::endl;
    std::cout << "" << std::endl;

    int category;
    std::cin >> category;

    switch (category)
    {
    case 1:
        std::cout << "The trip costs 30 kr." << std::endl;
        break;
    case 2:
    case 3:
        std::cout << "The trip costs 20 kr." << std::endl;
        break;
    default:
        std::cout << "You have entered an incorrect category." << std::endl;
        break;
    }
}
