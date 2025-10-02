#include <iostream>
#include <limits> // för numeric_limits
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
#include "if/switch2.h"

#include "loop/loop1.h"
#include "loop/loop2.h"
#include "loop/loop3.h"
#include "loop/loop4.h"
#include "loop/loop5.h"

using namespace std;

// bool fråga om användaren vill fortsätta
bool ask_continue()
{
    string answer;
    while (true)
    {
        cout << "\nDo you want to continue with another function? (Yes/No): ";
        cin >> answer;
        for (auto &c : answer)
            c = tolower(c);
        if (answer == "yes" || answer == "y")
            return true;
        if (answer == "no" || answer == "n")
            return false;
        cout << "Please answer Yes or No." << endl;
    }
}

// huvudprogram  , Om user vill fortsätta efter varje val
int main()
{
    int choice = -1;

    while (choice != 0)
    {
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
        cout << "12 = switch2_menu (Hamburger Menu)\n";
        cout << "13 = print_numbers_loop\n";
        cout << "14 = print_range_loop\n";
        cout << "15 = sum_and_repeat (Sum and repeat)\n";
        cout << "16 = sum_ten_numbers (Sum of 10 numbers)\n";
        cout << "17 = analyze_number (Analyze number)\n";
        cout << "0  = Exit\n";
        cout << "\nChoose option: ";

        // Hantera felaktig inmatning, om användaren skriver något annat än ett nummer
        if (!(cin >> choice))
        {
            // Här hamnar vi om användaren skrev fel (t.ex. text)
            cout << "Invalid input, please enter a number.\n";

            // rensa felstatus
            cin.clear();

            // kasta bort allt som finns kvar i inmatningsbufferten
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            choice = -1; // sätt choice till något ogiltigt så loopen fortsätter
            continue;
        }

        bool continue_program = true; // variabel för att kontrollera om användaren vill fortsätta
        switch (choice)               // välj alternativ
        {
        case 1:
            if1_example_function();            // kör funktion
            continue_program = ask_continue(); // fråga om användaren vill fortsätta
            break;
        case 4:
            if4_age_check();
            continue_program = ask_continue();
            break;
        case 5:
            if5_trip_cost();
            continue_program = ask_continue();
            break;
        case 6:
            if6_birth_decade();
            continue_program = ask_continue();
            break;
        case 7:
            if7_country_check();
            continue_program = ask_continue();
            break;
        case 8:
            if7_string();
            continue_program = ask_continue();
            break;
        case 9:
            if8_meal_options();
            continue_program = ask_continue();
            break;
        case 10:
            if9_pay_notes();
            continue_program = ask_continue();
            break;
        case 11:
            switch1_day_name();
            continue_program = ask_continue();
            break;
        case 12:
            switch2_menu();
            continue_program = ask_continue();
            break;
        case 13:
            print_numbers_loop();
            continue_program = ask_continue();
            break;
        case 14:
            print_range_loop();
            continue_program = ask_continue();
            break;
        case 15:
            sum_and_repeat();
            continue_program = ask_continue();
            break;
        case 16:
            sum_ten_numbers();
            continue_program = ask_continue();
            break;
        case 17:
            analyze_number();
            continue_program = ask_continue();
            break;
        case 0:
            cout << "Exiting program...\n"; // avsluta program om användaren väljer 0
            break;                          // bryt switch-satsen, kör inte ask_continue här
        default:
            cout << "Invalid choice, try again.\n";
        }
        if (!continue_program || choice == 0)
            break;
    }

    return 0;
}
