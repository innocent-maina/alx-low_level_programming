#include "main.h"

/**
 * _puts - this is the description.
 * @str : pointer
 * Return: this is the return value.
 */


void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str++);
}
_putchar("\n");
}
