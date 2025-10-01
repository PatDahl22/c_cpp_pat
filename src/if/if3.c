#include <stdio.h>
#include "if/if3.h"

void if3_fever_check()
{
    float temp;
    printf("What is your temperature like now?\t");
    scanf("%f", &temp);

    if (temp > 39.5)
    {
        printf("Your temperature is %.1f. You should see a doctor!\n", temp);
    }
    else if (temp > 37.8)
    {
        printf("Your temperature is %.1f. You have a fever!\n", temp);
    }
    else
    {
        printf("Your temperature is %.1f. You do not have a fever.\n", temp);
    }
}
