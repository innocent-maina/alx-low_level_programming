#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
_putchar('\n');
}
}

