#include "main.h"

/**
* _puts_recursion - affiche une chaîne de caractères suivie d'un saut de ligne
* @s: chaîne à afficher
*
* Return: rien
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
