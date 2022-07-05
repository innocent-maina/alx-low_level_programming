#include "main.h"
/**
* print_last_digit - Find last value
* @num: the number being checked
* Return: last digit
*/
int print_last_digit(int num)
{
if (num >= 0)
{
_putchar(num + '0')
return (num % 10);
}
else
{
_putchar(-num + '0')
return (-num % 10);
}
}

