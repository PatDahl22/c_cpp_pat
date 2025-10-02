
make c → bygger C-versionen (main.c)
make cpp → bygger C++-versionen (main.cpp)
!! Man får inte bygga båda main-filer samtidigt.

Utan att : 
→ Alternativ A: Byt namn på den fil du inte vill använda (t.ex. main.cpp → main.cpp.bak).
→ Alternativ B: Kommentera bort main() i den fil du inte vill köra.
→ Alternativ C (bättre): Låta Makefile bestämma vilken "variant" som byggs. (t.ex. make c för C-versionen, make cpp för C++-versionen).

➡️ Två targets i Makefile
Om man vill kunna köra både C och C++ utan att flytta filer, kan man lägga till två "targets" i Makefile:

.PHONY: c cpp
c:
$(MAKE) clean
$(MAKE) run C_SOURCES="$(shell find src -name '*.c' -not -name 'main.cpp')" CPP_SOURCES=""
cpp:
$(MAKE) clean
$(MAKE) run



➡️ #ifdef __cplusplus
    extern "C"
- När main.cpp kompileras som C++ så ser kompilatorn extern "C" och förstår att print_numbers_for_loop är en C-funktion (ingen namn-mangling).

- När .c-filer kompileras med gcc så påverkas inte koden alls.
- På så sätt kan både C- och C++-kod länkas ihop utan problem.


➡️ MAIN-loop  →  bool fråga om användaren vill fortsätta
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

🔄 bool continue_program = true; 
→ variabel för att kontrollera i switch-funtion: om användaren vill fortsätta efter köra en funtion
t.ex. :
   → case 1:
        if1_example_function();              // kör funktion
        continue_program = ask_continue();   // fråga om användaren vill fortsätta
        break;
