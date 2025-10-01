#include <stdio.h>
#include "if/if1.h"

void if1_example_function()
{
    int tal;
    printf("Mata in ett tal: ");
    scanf("%d", &tal);          // Read an integer from user input
    if (tal > 10)
    {
        printf("Talet är: %d, och är större än 10.\n", tal);
        fflush(stdout);  // Ensure output is printed immediately
    }
    else
    {
        printf("Talet är: %d, och mindre än 10.\n", tal);
        fflush(stdout);  // Ensure output is printed immediately
    }
}