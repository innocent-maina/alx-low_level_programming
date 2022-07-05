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
char i;
int j;
for (j = 0; i <= 9;)
{
for (i = 'a'; i <= 'z';)
{
_putchar(i * 10);
i++;
}
_putchar('\n');
j++;
}
}
