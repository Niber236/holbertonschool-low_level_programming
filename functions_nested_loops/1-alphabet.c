#include "main.h"
/**
* print_alphabet - prints the alphabet in lowercase
*
* Description: This function prints all the letters from a to z
*              in lowercase followed by a new line.
*/
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
_putchar(c);   /* <-- utiliser _putchar, pas putchar */
_putchar('\n');
}
