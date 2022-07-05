#include "main.h"
/**
* print_last_digit - Find last value
* @num: the number being checked
* Return: last digit
*/
int print_last_digit(int num)
{
int lastDigit = num % 10;
if (lastDigit >= 0)
{
_putchar(lastDigit + '0');
return (lastDigit);
}
else
{
_putchar(-lastDigit + '0');
return (-lastDigit);
}
}
