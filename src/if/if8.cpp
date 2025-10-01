#include <iostream>
#include "if/if8.h"
using namespace std;

void if8_meal_options()
{
    double amount;                                           // Belopp
    char discount;                                           // Rabatt
    cout << "----------------------------------------" << endl;
    cout << "Enter the amount of money you have: ";
    cin >> amount;
    cout << "Do you have a discount? (y/n): ";
    cin >> discount;
    bool has_discount = (discount == 'y' || discount == 'Y');  // Kontrollera om användaren har rabatt

    if (amount >= 15 && amount <= 25)                         // Mellan 15 och 25
    {
        if (has_discount)
        {
            cout << "You have " << amount << " kr and a discount, so you can buy a small hamburger with a french fries with a discount." << endl;
        }
        else
        {
            cout << "You don't have a discount but you have " << amount << " kr so you can buy a small hamburger." << endl;
        }
    }
    else if (amount > 25 && amount <= 50)                    // Mellan 25 och 50
    {
        if (has_discount)
        {
            cout << "You have " << amount << " kr and a discount, so you can buy a large hamburger and french fries with a discount." << endl;
        }
        else
        {
            cout << "You don't have a discount but you have " << amount << " kr so you can buy a large hamburger." << endl;
        }
    }
    else if (amount > 60 || (amount > 50 && amount <= 60 && has_discount))   // Mer än 60 eller mellan 50 och 60 med rabatt
    {
        cout << "You have " << amount << " kr and a discount, so you can buy a meal and a drink with your discount." << endl;
    }
    else
    {
        cout << "You don't have a discount but you have " << amount << " kr so you have enough money for these options." << endl;
    }
}
