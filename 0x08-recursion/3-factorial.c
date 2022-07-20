#include "main.h"
#include <stdio.h>

/**
 * factorial - return factorial of a given number
 * @n: variable to find factorial
 * Return: Number (int)
 * description - Write a function that returns the factorial of a given number.
 */
int factorial(int n)
{
/* base case */
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n = n * factorial(n - 1));
}
