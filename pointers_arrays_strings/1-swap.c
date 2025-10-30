#include "main.h"

void swap_int(int *a, int *b)
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: void
 */
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
