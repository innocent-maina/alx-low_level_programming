#include "main.h"
/**
* times_table - Times table
* Return: 0
*/
void times_table(void)
{
int i;
int j;
int k = 0;

for (j = 0; j <= 9; j++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
