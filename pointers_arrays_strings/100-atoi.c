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
int digit_found = 0;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
else if (s[i] == '+')
{
}
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
digit_found = 1;
result = result * 10 + (s[i] - '0');
i++;
}
if (!digit_found)
return (0);
return (sign * result);
}
