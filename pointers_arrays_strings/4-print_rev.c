#include "main.h"

/**
* print_rev - affiche une chaîne de caractères à l'envers
* @s: chaîne de caractères à afficher
*/
void print_rev(char *s)
{
int len = 0;
int i;

/* calcule la longueur de la chaîne */
while (s[len] != '\0')
len++;

/* affiche la chaîne à l'envers */
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n'); /* saut de ligne */
}
