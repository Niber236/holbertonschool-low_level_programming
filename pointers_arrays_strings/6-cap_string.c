#include "main.h"
#include <string.h> /* pour strchr */
#include <stddef.h> /* pour NULL */

/**
* cap_string - met une majuscule à chaque mot d'une chaîne
* @str: la chaîne de caractères
* Return: pointeur vers la chaîne modifiée
*/
char *cap_string(char *str)
{
int i = 0;
char sep[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
if (i == 0 || strchr(sep, str[i - 1]) != NULL)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
i++;
}
return (str);
}
