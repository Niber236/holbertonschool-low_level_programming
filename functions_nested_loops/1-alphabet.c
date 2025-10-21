#include "main.h"

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
_putchar(c);   /* <-- utiliser _putchar, pas putchar */
_putchar('\n');
}
