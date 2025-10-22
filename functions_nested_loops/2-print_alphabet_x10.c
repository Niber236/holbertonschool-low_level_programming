#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times in lowercase
*
* Description: This function prints the alphabet from 'a' to 'z'
*              10 times, each followed by a new line.
*/
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);   /* utilisation obligatoire de _putchar */
_putchar('\n');
}
}
