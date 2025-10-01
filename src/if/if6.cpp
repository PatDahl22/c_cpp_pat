#include <iostream>
#include "if/if6.h"
using namespace std;  // Använd std-namnområdet för enkel åtkomst till cout och cin

void if6_birth_decade()
{
    int year;
    cout << "Enter your birth year: ";
    cin >> year;

    if (year < 1980)
    {
        cout << "Your year of birth is " << year << ".\n" "You were part of Baby Boomers (early 1960s) or part of Generation X.\n" << endl;
    }
    else if (year >= 1980 && year < 1990)
    {
        cout << "Your year of birth is " << year << ".\n" "You were born in the 1980s.\n" "You are Generation X or the Millennial Generation." << endl;
    }
    else if (year >= 1990 && year < 2000)
    {
        cout << "Your year of birth is " << year << ".\n" "You were born in the 1990s.\n" "You are generation Y or a Millennial." << endl;
    }
    else if (year >= 2000)
    {
        cout << "Your year of birth is " << year << ".\n" "You were born in the 2000s.\n" "You are generation Z or the primarily Millennials." << endl;
    }
    else
    {
        cout << "Your year of birth is " << year << ".\n" "You were not born in the 1990s or the 1980s." << endl;
    }
}
