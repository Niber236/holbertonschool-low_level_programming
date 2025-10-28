/* 0-isupper.c */
#include "main.h"

/**
* _isupper - Vérifie si un caractère est une lettre majuscule (A-Z).
* @c: Le caractère à tester (représenté comme un int).
*
* Return: 1 si c est une majuscule, 0 sinon.
*/
int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
