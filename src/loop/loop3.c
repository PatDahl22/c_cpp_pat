#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "loop/loop3.h"

void sum_and_repeat()
{
    // Fråga användaren om två tal och skriv ut summan, upprepa tills användaren svarar nej
    char answer[16];
    while (1)
    {
        // Fråga användaren om två tal och skriv ut summan
        int a, b;
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        printf("Sum: %d\n", a + b);

        // Fråga användaren om de vill fortsätta
        printf("Do you want to continue SUM-Loop (Yes or No)? ");
        scanf("%15s", answer);
        // Gör om svaret till gemener för att underlätta jämförelse
        for (int i = 0; answer[i]; i++)
            answer[i] = tolower((unsigned char)answer[i]);
        if (strcmp(answer, "yes") == 0 || strcmp(answer, "y") == 0)
            continue;
        if (strcmp(answer, "no") == 0 || strcmp(answer, "n") == 0)
            break;
        printf("Please answer Yes or No.\n");
    }
}
