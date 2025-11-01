#include "main.h"

/**
*_strncpy - copie une chaîne de caractères
*@dest: la chaîne de destination
*@src: la chaîne source
*@n: le nombre max de caractères à copier
*Return: un pointeur vers la chaîne dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
