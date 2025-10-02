#include <stdio.h>
#include "loop/loop5.h"

void analyze_number()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return;
    }

    printf("\nDigits less than %d but greater than 0:\n", n);
    for (int i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("\nSum of all digits: %d\n", (n - 1) * n / 2); // sum of first (n-1) natural numbers
    printf("Count of all digits: %d\n", n - 1);

    // Analycera even and odd numbers
    int even_sum = 0, even_count = 0;
    printf("\nEven numbers less than %d but greater than 0 are:\n", n);
    for (int i = 1; i < n; i++)
    {
        // Check if the number is even
        if (i % 2 == 0)
        {
            printf("%d ", i);
            even_sum += i;
            even_count++;
        }
    }
    // sumera och räkna antalet jämna tal
    printf("\nSum of even numbers: %d\nCount of even numbers: %d\n", even_sum, even_count);

    // analycera odd nummer
    int odd_sum = 0, odd_count = 0;
    printf("\nOdd numbers less than %d but greater than 0 are:\n", n);
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            odd_sum += i;
            odd_count++;
        }
    }
    // sumera och räkna antalet udda tal
    printf("\nSum of odd numbers: %d\nCount of odd numbers: %d\n", odd_sum, odd_count);
}
