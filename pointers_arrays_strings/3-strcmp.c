#include "main.h"

/**
*_strcmp - compare deux chaînes de caractèr
*@s1: première chaî
*Return: 0 si identiques, sinon la différence entre les deux premiers chars différ
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}
return (s1[i] - s2[i]);
}
