#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 *
 * Return: Always 0.
 * Description - This function prints the struct dog
 * @d: pointer to the struct dog
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (!d->name && d->name != NULL)
{
printf("Name: (nill)");
}
else if (!d->age)
{
printf("Age: (nill)");
}
else if (!d->owner && d->owner != NULL)
{
printf("Owner: (nill)");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
}
