#include "main.h"

/**
 * string_toupper - change toutes les lettres minuscules en majuscules
 * @str: la chaîne de caractères
 * Return: pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
i++;
}
return (str);
}
