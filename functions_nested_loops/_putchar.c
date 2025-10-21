#include <unistd.h>

/**
* _putchar - écrit le caractère c sur stdout
* @c: le caractère à imprime
* Return: 1 (succès), -1 (erreur)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
