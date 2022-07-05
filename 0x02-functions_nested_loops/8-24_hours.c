#include "main.h"
/**
* jack_bauer - Time
* Return: 0
*/
void jack_bauer(void)
{
int mm;
int hh;

for (hh = 0; hh < 24; hh++)
{
mm = 0;
while (mm < 60)
{
_putchar((hh / 10) + '0');
_putchar((hh % 10) + '0');
_putchar(':');
_putchar((mm / 10) + '0');
_putchar((mm % 10) + '0');
_putchar('\n');
mm++;
}
}
}
