#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14
* each line followed by a new line
*/
void more_numbers(void)
{
int line, n;

for (line = 0; line < 10; line++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
_putchar('0' + (n / 10));  /* imprime le chiffre des dizaines */
_putchar('0' + (n % 10));      /* imprime le chiffre des unités */
}
_putchar('\n');
}
}
