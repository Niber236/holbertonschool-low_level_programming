#include "main.h"

/**
* _strchr - recherche la première occurrence d’un caractère dans une chaîne
* @s: chaîne de caractères
* @c: caractère à chercher
* Return: pointeur vers le caractère trouvé, ou NULL si absent
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (0);
}
