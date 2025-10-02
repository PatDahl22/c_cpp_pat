#include <stdio.h>
#include "loop/loop1.h"

void print_numbers_loop()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    int i = 0;
    while(i <= 10){
        printf("%d\n",i);
        i++;
    }

    for(int i = 10; i >= 0; i = i -4 )   {
        printf("%d\n",i);
    }
}

