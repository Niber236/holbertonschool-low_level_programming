#include "main.h"
/**
* _atoi - convertit une chaîne en entier
* @s: chaîne à convertir
* Return: entier correspondant
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
else if (s[i] == '+')
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (sign * result);
}
