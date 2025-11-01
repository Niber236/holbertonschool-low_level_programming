#include "main.h"

/**
*_strncat - concatène deux chaînes en prenant au max n caractères de src
*@dest: la chaîne de destination
*@src: la chaîne source
*@n: le nombre max de caractères à copier
*Return: un pointeur vers la chaîne dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
