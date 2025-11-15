#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - longueur string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}

/**
 * _strcpy - copie string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - crée un nouveau dog
 * @name: nom
 * @age: âge
 * @owner: proprio
 * Return: pointeur dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len1, len2;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
len1 = _strlen(name);
len2 = _strlen(owner);
d->name = malloc(len1 + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(len2 + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
_strcpy(d->name, name);
_strcpy(d->owner, owner);
d->age = age;
return (d);
}
