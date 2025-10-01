#include <stdio.h>
#include "if/if2.h"

void if2_milk_order()
{
    int packages;   // namnget packages istället för att använda milk eller milk_packages
    printf("How many packages of milk are left? ");
    scanf("%d", &packages);

    if (packages < 10)
    {
        printf("We have only %d left. Order 30 packages.\n", packages);
    }
    else if (packages >= 10 && packages <= 20)
    {
        printf("We have %d left. Order 20 packages.\n", packages);
    }
    else
    {
        printf("You do not need to order any milk.\n");
    }
}
