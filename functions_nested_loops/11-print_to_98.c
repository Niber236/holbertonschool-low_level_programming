#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - affiche tous les nombres naturels de n à 98
 * @n: le nombre de départ
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
            n--;
        }
    }
    printf("\n");
}
