#include <iostream>
#include "if/if7.h"
using namespace std;

void if7_country_check()
{
    cout << "Enter the number for your country:" << endl;
    cout << "1 Sweden" << endl;
    cout << "2 Denmark" << endl;
    cout << "3 Norway" << endl;
    cout << "4 Finland" << endl;
    cout << "5 Iceland" << endl;
    cout << "0 Resten" << endl;
    int country;
    cin >> country;

    switch (country)
    {
    case 1:
    case 2:
    case 3:
        cout << "You live in Scandinavia" << endl;
        break;    // Avsluta case 1, 2 och 3 här
    case 0:
    case 4:
    case 5:
        cout << "You do not live in Scandinavia." << endl;
        break;   // Avsluta case 0, 4 och 5 här
    default:
        cout << "Invalid input" << endl;
        break;  // Avsluta default här
    }
}
