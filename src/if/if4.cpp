#include <iostream>
#include "if/if4.h"

void if4_age_check()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18)
    {
        std::cout << "You are not of legal age." << std::endl;
    }
    else if (age > 65)
    {
        std::cout << "You are a pensioner." << std::endl;
    }
    else
    {
        std::cout << "You are of legal age but not a pensioner." << std::endl;
    }
}
