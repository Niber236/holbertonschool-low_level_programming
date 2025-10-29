#include "main.h"

/**
* print_triangle - prints a triangle of size 'size' using '#'
* @size: size of the triangle
*
* If size <= 0, only a newline is printed.
* Triangle is right-aligned.
*/
void print_triangle(int size)
{
int row, spaces, hashes;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
/* imprimer les espaces (alignement à droite) */
for (spaces = 0; spaces < size - row; spaces++)
_putchar(' ');

/* imprimer les # */
for (hashes = 0; hashes < row; hashes++)
_putchar('#');

/* fin de ligne */
_putchar('\n');
}
}
