#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character '\' should be printed
*
* If n <= 0, only a newline is printed.
*/
void print_diagonal(int n)
{
int line, spaces;

if (n <= 0)
{
_putchar('\n');
return;
}

for (line = 0; line < n; line++)
{
/* imprimer les espaces avant le '\' */
for (spaces = 0; spaces < line; spaces++)
_putchar(' ');

/* imprimer le caractère diagonal */
_putchar('\\');

/* fin de ligne */
_putchar('\n');
}
}
