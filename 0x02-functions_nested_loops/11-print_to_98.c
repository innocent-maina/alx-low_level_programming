#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from num to 98,
 *
 * @num: print from this number to 98
 * Return:  0
 */

void print_to_98(int num)
{
int i;
int j;

if (num <= 98)
{
for (i = num; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else if (i == 98)
printf("%d\num", i);
}
}
else if (num >= 98)
{
for (j = num; j >= 98; j--)
{
if (j != 98)
printf("%d, ", j);
else if (j == 98)
printf("%d\num", j);
}
}
}
