#include "main.h"
/*
 * _islower - Entry point. Print characters if uppercase or lowercase
 *
 * Description: 'the program's description'
 *@c: character to check if uppercase or lowercase
 * Return: 1 if uppercase, 0 if lowercase
 */

int _islower(int c)
{
if (c >= 'a'  || c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
