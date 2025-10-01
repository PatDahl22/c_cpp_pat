#include <iostream>
#include <limits>   // för numeric_limits
#include "if/if1.h"
#include "if/if2.h"
#include "if/if3.h"
#include "if/if4.h"
#include "if/if5.h"
#include "if/if6.h"
#include "if/if7.h"
#include "if/if7_string.h"
#include "if/if8.h"
#include "if/if9.h"
#include "if/switch1.h"
using namespace std;

int main() {
    int choice = -1;

    while (choice != 0) {
        cout << "\n----------------------------------------" << endl;
        cout << "=== MENU ===\n";
        cout << "1  = if1_example_function\n";
        cout << "2  = if2_milk_order\n";
        cout << "3  = if3_fever_check\n";
        cout << "4  = if4_age_check\n";
        cout << "5  = if5_trip_cost\n";
        cout << "6  = if6_birth_decade\n";
        cout << "7  = if7_country_check\n";
        cout << "8  = if7_string\n";
        cout << "9  = if8_meal_options\n";
        cout << "10 = if9_pay_notes\n";
        cout << "11 = switch1_day_name\n";
        cout << "0  = Exit\n";
        cout << "\nChoose option: ";

        if (!(cin >> choice)) {
            // Här hamnar vi om användaren skrev fel (t.ex. text)
            cout << "Invalid input, please enter a number.\n";

            // rensa felstatus
            cin.clear();

            // kasta bort allt som finns kvar i inmatningsbufferten
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            choice = -1; // sätt choice till något ogiltigt så loopen fortsätter
            continue;
        }

        switch (choice) {
            case 1:  if1_example_function(); break;
            case 2:  if2_milk_order(); break;
            case 3:  if3_fever_check(); break;
            case 4:  if4_age_check(); break;
            case 5:  if5_trip_cost(); break;
            case 6:  if6_birth_decade(); break;
            case 7:  if7_country_check(); break;
            case 8:  if7_string(); break;
            case 9:  if8_meal_options(); break;
            case 10: if9_pay_notes(); break;
            case 11: switch1_day_name(); break;
            case 0:  cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice, try again.\n";
        }
    }

    return 0;
}
