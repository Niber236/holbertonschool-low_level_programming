#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialise un dog
 * @d: structure dog
 * @name: nom
 * @age: âge
 * @owner: proprio
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
