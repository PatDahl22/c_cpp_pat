➡️ void example_function(); och void example_function(void);
    I C betyder void example_function(); “okänt antal/typer av argument” (gammal stil).
    void example_function(void); betyder “inga argument” i både C och C++.

➡️ Namnget
    I C/C++-världen är unik namngivning superviktigt, annars blir det snabbt kaos både för sig själv och för länkaren. Därför gör nästan alla erfarna utvecklare så här:

I C → alltid prefix, t.ex.
    - math_add()
    - math_sub()
    - io_read()
    - io_write()
    - eller : if1_example_function(), if2_example_function()

I C++ → man kan använda namespaces, t.ex.
    - namespace if1 { void example_function(); }
    - namespace if2 { void example_function(); }

** Att ange unik namngivning slipper man prefix, och man får samma tydlighet.
** Alternativ
    Lägg funktionerna som static (bara synliga i sin egen .c !!)
    // if1.c
    static void example_function(void) { ... }
    - En static-funktion i .c-filen är osynlig utanför den filen.
    Man kan ha samma namn i flera .c, men då kan de inte användas utanför filen (ingen extern länkning).
    ➡️Det passar bra för hjälpfunktioner som bara används internt i samma .c.

➡️ fflush(stdout);
    Lägg en newline i prompten eller kör fflush(stdout); efter prompten 
    (i vissa miljöer annars visas inte texten direkt).
    
➡️using namespace std;  
    Använd std-namnområdet för enkel åtkomst till cout och cin

➡️ 
    
    
