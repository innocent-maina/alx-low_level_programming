#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: character
 * @size: integer
 * Return: boolean
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
{
return NULL;
}
p = malloc((size) * sizeof(char));
if (p == '\0')
{
return (0);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}

