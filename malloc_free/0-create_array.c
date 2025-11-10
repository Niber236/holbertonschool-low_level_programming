#include "main.h"
#include <stdlib.h>

/**
* create_array - crée un tableau de caractères et l'initialise
* @size: taille du tableau
* @c: caractère d'initialisation
*
* Return: pointeur vers le tableau ou NULL si erreur
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
