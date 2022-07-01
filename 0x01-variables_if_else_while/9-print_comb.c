#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: 0
 */

int main(void)
{
int x = '0';

while (x <= '9')
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
