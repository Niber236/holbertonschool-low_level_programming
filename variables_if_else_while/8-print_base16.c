#include <stdio.h>

/**
* main - prints all numbers of base 16 in lowercase
*
* Return: Always 0
*/
int main(void)
{
int i;

for (i = 0; i < 16; i++)
putchar(i < 10 ? '0' + i : 'a' + i - 10);
putchar('\n');

return (0);
}
