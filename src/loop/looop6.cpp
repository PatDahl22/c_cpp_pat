#include <iostream>
#include <cstdlib>
#include <ctime>
#include "loop/loop6.h"
using namespace std;

void roll_dice()
{
    srand((unsigned)time(0));
    char play_again = 'y';   // Initialisera play_again till 'y' för att starta loopen
    while (play_again == 'y' || play_again == 'Y')
    {
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        cout << "The values are: \n" << die1 << "\n" << die2 << endl;
        cout << "Roll the dices again? (y/n): ";
        cin >> play_again;
    }
}