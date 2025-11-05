#include "main.h"

/**
 * print_chessboard - affiche un échiquier 8x8
 * @a: tableau à deux dimensions représentant l’échiquier
 * Return: rien
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++) /* lignes */
{
for (j = 0; j < 8; j++) /* colonnes */
{
_putchar(a[i][j]); /* affiche chaque case */
}
_putchar('\n'); /* retour à la ligne après chaque ligne */
}
}
