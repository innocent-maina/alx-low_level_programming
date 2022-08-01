#include <stdlib.h>
#include "dog.h"

/**
 * free_dogs - check the code
 *
 * Return: void
 * Description - This function prints the struct dog
 * @d: pointer to the struct dog
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
