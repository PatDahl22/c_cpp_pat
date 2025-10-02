#include <stdio.h>
#include "loop/loop2.h"

void print_range_loop()
{
    // Be användaren mata in två tal
    int start, end;
    printf("Enter the first number: ");
    scanf("%d", &start);
    printf("Enter the second number: ");
    scanf("%d", &end);

    // Skriv ut alla tal mellan start och end (inklusive) med både for-loop och while-loop
    printf("Numbers between %d and %d (for-loop):\n", start, end);
    // for-loop version
    if (start <= end)
    {
        // ökande ordning
        for (int i = start; i <= end; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        // minskande ordning
        for (int i = start; i >= end; i--)
        {
            printf("%d\n", i);
        }
    }

    // while-loop version som kör samma sak
    printf("Numbers between %d and %d (while-loop):\n", start, end);
    int i = start;
    if (start <= end)
    {
        while (i <= end)
        {
            printf("%d\n", i);
            i++;
        }
    }
    else
    {
        while (i >= end)
        {
            printf("%d\n", i);
            i--;
        }
    }
}
