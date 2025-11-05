#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - recherche le premier caractère dans s qui est aussi dans accept
 * @s: la chaîne source à parcourir
 * @accept: les caractères à rechercher
 * Return: un pointeur vers le premier caractère correspondant dans s, ou NULL si rien trouvé
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++) /* On parcourt chaque caractère de s */
{
for (j = 0; accept[j] != '\0'; j++) /* On compare avec chaque caractère de accept */
{
if (s[i] == accept[j])
return (&s[i]); /* On renvoie l’adresse du premier match */
}
}
return (NULL); /* Aucun caractère trouvé */
}
