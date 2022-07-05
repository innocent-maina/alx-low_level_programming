#include "main.h"
/**
* times_table - Times table
* Return: 0
*/
void times_table(void)
{
int i;
int j;

for (j = 0; j <= 9; j++)
{
for (j = 0; j <= 9; j++)
{
_putchar(i * j);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
