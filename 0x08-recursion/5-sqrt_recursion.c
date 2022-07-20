#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
if (n < 0)
{
return (-1);
}
if ((i * i) > n)
{
return (-1);
}
if ((i * i) == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: variable
 * Return: square root of n (int)
 * description - Write a function that returns the
 *  natural square root of a number.
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

