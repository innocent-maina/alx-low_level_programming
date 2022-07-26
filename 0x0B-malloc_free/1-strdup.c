#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer to
 * a newly allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: string to use
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
char *p;
unsigned int i;
unsigned int j;

if (!str)
{
return (NULL);
}
while (*(str + 1))
i++;
i++;

p = malloc(sizeof(char) * i);

if (p == NULL)
{
return (NULL);
};

for (j = 0; j <= i; j++)
{
p[j] = str[j];
}
return (p);
}
