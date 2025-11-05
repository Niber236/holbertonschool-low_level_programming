#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - affiche la somme des deux diagonales d’une matrice carrée
 * @a: pointeur vers le premier élément de la matrice
 * @size: taille (nombre de lignes/colonnes)
 * Return: rien
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i]; /* diagonale principale */
sum2 += a[i * size + (size - 1 - i)]; /* diagonale secondaire */
}
printf("%d, %d\n", sum1, sum2);
}
