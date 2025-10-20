#include <stdio.h>

/**
* main - Prints all possible combinations of two digits
*
* Description: 
*   Prints all combinations of two different digits in ascending order.
*   Digits are separated by a comma followed by a space, except the last one.
*   Only putchar is allowed. No variables of type char are used.
*
* Return: 0
*/
int main(void)
{
int i, j; /* Loop counters for the first and second digit */

for (i = 0; i <= 8; i++) /* First digit goes from 0 to 8 */
{
for (j = i + 1; j <= 9; j++) /* Second digit goes from i+1 to 9 */
{
putchar(i + '0'); /* Print first digit */
putchar(j + '0'); /* Print second digit */

 /* Print ", " after each combination except the last */
if (!(i == 8 && j == 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n'); /* Print newline at the end */
return (0);
}
