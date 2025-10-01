#ifndef IF1_H 
#define IF1_H

// __cplusplus är en makro som endast definieras när filen kompileras som C++. 
// Detta gör att du kan använda samma header i både C och C++ projekt.
#ifdef __cplusplus
extern "C"        //för att C++ ska kunna länka mot C-koden
// extern "C" säger till C++-kompilatorn: “Behandla funktionerna i detta block som C-funktioner (utan C++ name mangling)”.
{
#endif

    // void example_function();
    void if1_example_function(void);   // bättre än () i C
    // I C betyder void example_function(); “okänt antal/typer av argument” (gammal stil).
    // void example_function(void); betyder “inga argument” i både C och C++.
#ifdef __cplusplus
}
#endif

#endif   // IF1_H
