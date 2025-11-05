#include "main.h"
#include <stddef.h>

/**
 * _strstr - localise une sous-chaîne dans une autr
 * @haystack: la chaîne principal  parcouri
 * @needle: la sous-chaî  rechercher
 * Return: pointeur vers le début de la sous-chaîne trouvée, ou NULL si introuvable
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (NULL);
}
