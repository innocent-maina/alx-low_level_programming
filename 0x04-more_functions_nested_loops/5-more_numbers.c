#include "main.h"

/**
 * more_numbers - prints more numbers.
 * Return: void.
 */


void more_numbers(void)
{
int i;
int j = 0;

while (j < 10)
{
for (i = 48; i <= 62; i++)
{
_putchar(i * 10);
}
_putchar('\n');
j++;
}
_putchar('\n');
}
