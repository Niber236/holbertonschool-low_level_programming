#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')  /* condition d’arrêt */
        return;

    _print_rev_recursion(s + 1);  /* appel récursif sur le reste de la chaîne */
    _putchar(*s);                  /* affichage du caractère après l’appel récursif */
}
