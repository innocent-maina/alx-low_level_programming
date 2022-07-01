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
char c;
char x;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (x = 'A'; x <= 'Z'; x++) {
putchar(x);
}
putchar('\n');
return (0);
}
