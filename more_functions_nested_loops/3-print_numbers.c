#include "main.h"

/**
* print_numbers - Affiche les chiffres de 0 à 9 suivis d'un saut de ligne.
*/
void print_numbers(void)
{
int d;

for (d = 0; d <= 9; d++)
_putchar('0' + d);
_putchar('\n');
}
