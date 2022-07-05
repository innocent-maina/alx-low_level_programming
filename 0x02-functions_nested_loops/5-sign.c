#include "main.h"
/**
* print_sign - Prints if the number is +, 0 or -
* @n: the number being checked
* Return: 1 if +ve, 0 if 0, -1 if -ve
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
return (0);
}
else
{
_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);
}
}
