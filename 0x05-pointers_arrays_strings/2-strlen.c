#include "main.h"

/**
 * _strlen - this is the description.
 * @s : pointer
 * Return: nothing.
 */


int _strlen(char *s)
{
int stringLength = 0;
while (*s != '\0')
{
stringLength++;
s++;
}
return (stringLength);
}
