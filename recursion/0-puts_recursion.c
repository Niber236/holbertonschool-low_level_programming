#include <stdio.h>
/*
*je doit afficher sans la boucle donc en recuversiter
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar ('\n');
return;
}
putchar (*s);
_puts_recursion(s + 1);
}
