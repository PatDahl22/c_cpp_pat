➡️ bool fråga om användaren vill fortsätta
bool ask_continue()
{
    string answer;
    while (true)
    {
        cout << "\nDo you want to continue? (Yes/No): ";
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

🔄 while-loop i menyn
- Om user svara 'Yes* kör →  while (choice != 0)

- int choice = -1;  → startvärde, -1 betyder inget val än

- while (choice != 0) → loopen fortsätter tills du väljer 0.
    Menyn skrivs ut varje gång.
    Efter att en funktion körts hoppar den tillbaka till menyn.
    När du skriver 0 avslutas programmet.

- cin >> choice;   → läs in användarens val

- if (!(cin >> choice)) { ... } → kollar om inmatningen inte gick att konvertera till ett heltal.

- cin.clear(); → rensar felstatus.

- cin.ignore(numeric_limits<streamsize>::max(), '\n'); → kastar bort allt som finns kvar i input-bufferten (t.ex. "hej").
    →Programmet fortsätter utan att krascha och visar menyn igen.

➡️ bool continue_program = true; 
→ variabel för att kontrollera i switch-funtion: om användaren vill fortsätta efter köra en funtion
t.ex. :
   → case 1:
        if1_example_function();              // kör funktion
        continue_program = ask_continue();   // fråga om användaren vill fortsätta
        break;
