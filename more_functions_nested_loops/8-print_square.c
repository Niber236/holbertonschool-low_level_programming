#include "main.h"

/**
* print_square - prints a square of size 'size' using '#'
* @size: size of the square
*
* If size <= 0, only a newline is printed.
*/
void print_square(int size)
{
int row, col;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
_putchar('#');
_putchar('\n');
}
}
