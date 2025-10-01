#include <iostream>
#include "if/if9.h"
using namespace std;

void if9_pay_notes()
{
    int amount;
    cout << "----------------------------------------" << endl;
    cout << "Enter the amount to be paid: ";
    cin >> amount;

    int notes500 = amount / 500;
    amount %= 500;
    int notes200 = amount / 200;
    amount %= 200;
    int notes100 = amount / 100;
    amount %= 100;
    int notes50 = amount / 50;
    amount %= 50;
    int notes20 = amount / 20;
    amount %= 20;
    int notes10 = amount / 10;
    amount %= 10;
    int notes1 = amount;

    cout << "You need to pay with:" << endl;
    if (notes500)
        cout << notes500 << " 500-note" << (notes500 > 1 ? "s" : "") << endl;
    if (notes200)
        cout << notes200 << " 200-note" << (notes200 > 1 ? "s" : "") << endl;
    if (notes100)
        cout << notes100 << " 100-note" << (notes100 > 1 ? "s" : "") << endl;
    if (notes50)
        cout << notes50 << " 50-note" << (notes50 > 1 ? "s" : "") << endl;
    if (notes20)
        cout << notes20 << " 20-note" << (notes20 > 1 ? "s" : "") << endl;
    if (notes10)
        cout << notes10 << " 10-kronor" << (notes10 > 1 ? "s" : "") << endl;
    if (notes1)
        cout << notes1 << " one-kronor" << (notes1 > 1 ? "s" : "") << endl;
}
