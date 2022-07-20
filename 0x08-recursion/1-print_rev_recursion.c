#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse.
 * @s: pointer to char
 * Return: No.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar(*s);
}
else
{
_putchar('\n');
}
}

