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
int y = 'a';

while (x <= '9')
{
putchar(x);
x++;
}
while (y <= 'f')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
