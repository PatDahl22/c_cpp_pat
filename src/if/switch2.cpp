#include <iostream>
#include <limits>
#include "if/switch2.h"
using namespace std;

// Funktion för att hantera menyval med switch-sats
void switch2_menu()
{
    // Variabler för att hålla reda på totalkostnad, använda poäng och intjänade poäng

    int total_cost = 0;
    int order_counts[8] = {0};
    bool add_more = true;
    do
    {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Small Hamburg 30 kr" << endl;
        cout << "2. Medium Hamburg 50 kr" << endl;
        cout << "3. Big Hamburg 150g 65 kr" << endl;
        cout << "4. Big Hamburg 300g 95 kr" << endl;
        cout << "5. Regular French fries 15 kr (included in all menus)" << endl;
        cout << "6. Large French fries 25 kr (10 kr extra in the menu)" << endl;
        cout << "7. Small soft drink 15 kr (included in all menus)" << endl;
        cout << "0. Finish order" << endl;
        cout << "Choose item: ";
        int choice = -1;
        cin >> choice;
        int cost = 0;
        switch (choice)
        {
        case 1:
            cost = 30;
            order_counts[1]++;
            break;
        case 2:
            cost = 50;
            order_counts[2]++;
            break;
        case 3:
            cost = 65;
            order_counts[3]++;
            break;
        case 4:
            cost = 95;
            order_counts[4]++;
            break;
        case 5:
            cost = 15;
            order_counts[5]++;
            cout << "Regular fries included in all menus." << endl;
            break;
        case 6:
            cost = 10;
            order_counts[6]++;
            break;
        case 7:
            cost = 15;
            order_counts[7]++;
            cout << "Small soft drink included in all menus." << endl;
            break;
        case 0:
            add_more = false;
            continue;
        default:
            cout << "Invalid choice." << endl;
            continue;
        }
        total_cost += cost;
        cout << "Add more from the menu? (y/n): ";    // fråga om användaren vill lägga till mer
        char more;
        cin >> more;
        add_more = (more == 'y' || more == 'Y');
    } while (add_more);           // Fortsätt så länge användaren vill lägga till mer

    // Print order details
    cout << "\n--- ORDER DETAILS ---" << endl;
    if (order_counts[1])    // Kontrollera om någon beställde Small Hamburg
        cout << order_counts[1] << " x Small Hamburg 30 kr" << endl;
    if (order_counts[2])   // Kontrollera om någon beställde Medium Hamburg
        cout << order_counts[2] << " x Medium Hamburg 50 kr" << endl;
    if (order_counts[3])   // Kontrollera om någon beställde Big Hamburg 150g
        cout << order_counts[3] << " x Big Hamburg 150g 65 kr" << endl;
    if (order_counts[4])   // Kontrollera om någon beställde Big Hamburg 300g
        cout << order_counts[4] << " x Big Hamburg 300g 95 kr" << endl;
    if (order_counts[5])   // Kontrollera om någon beställde Regular French fries
        cout << order_counts[5] << " x Regular French fries 15 kr" << endl;
    if (order_counts[6])   // Kontrollera om någon beställde Large French fries
        cout << order_counts[6] << " x Large French fries 10 kr extra" << endl;
    if (order_counts[7])   // Kontrollera om någon beställde Small soft drink
        cout << order_counts[7] << " x Small soft drink 15 kr" << endl;
    cout << "Total order cost: " << total_cost << " kr" << endl;
    // count total ordered items and total cost
    int total_items = 0;
    for (int i = 1; i <= 7; i++)
    {
        total_items += order_counts[i];
    }
    cout << "Total items ordered: " << total_items << endl;

    // Points logic after all orders
    cout << "Do you have and want to use points? (y/n): ";
    // fråga om användaren vill använda poäng
    char use_points;                  // variabel för att lagra användarens svar
    cin >> use_points;                // läsa in användarens svar
    int points_used = 0, available_points = 0;    // variabler för att lagra använda och tillgängliga poäng
    int cost_to_pay = total_cost;                 // kostnad att betala efter poänganvändning
    if (use_points == 'y' || use_points == 'Y')   // om användaren vill använda poäng
    {
        cout << "How many points do you have? ";
        cin >> available_points;
        int max_points = (cost_to_pay < available_points) ? cost_to_pay : available_points;
        cout << "How many points do you want to use (max " << max_points << ")? ";
        cin >> points_used;
        if (points_used > max_points)
            points_used = max_points;
        cost_to_pay -= points_used;
    }
    int points_earned = cost_to_pay / 10;

    // Final summary
    cout << "\n--- FINAL SUMMARY ---" << endl;
    cout << "Total to pay: " << cost_to_pay << " kr" << endl;
    cout << "Total points used: " << points_used << endl;
    cout << "Total points earned: " << points_earned << endl;
}
