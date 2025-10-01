🔄 main.cpp while-loop i menyn

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