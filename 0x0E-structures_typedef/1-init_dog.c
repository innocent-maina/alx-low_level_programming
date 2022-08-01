#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 *
 * Return: Always 0.
 * Description - This function initializes the struct dog
 * @d: pointer to the struct dog
 * @name: name of the struct dog
 * @age: age of the struct dog
 * @owner: owner of the struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
