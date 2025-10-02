#include <stdio.h>
#include "loop/loop4.h"

void sum_ten_numbers()
{
    int sum = 0, num;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum of what you input is: %d\n", sum);
}
