#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 *
 * Return: Always 0.
 * Description - This function initializes the struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  d->name = name;
  d->age = age;
  d->owner = owner;
}
