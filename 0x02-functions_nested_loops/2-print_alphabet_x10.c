#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0; i <= 9;)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
j++;
}
_putchar('\n');
}
}
