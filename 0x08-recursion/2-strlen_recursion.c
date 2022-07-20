#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - find length of a string
 * @s: variable of string
 * Return: Number (int)
 * description - Write a function that returns the length of a string.
 */
int _strlen_recursion(char *s)
{
/* base case */
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
