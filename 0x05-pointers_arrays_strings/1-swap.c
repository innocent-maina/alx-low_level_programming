#include "main.h"

/**
 * swap_int - this is the description.
 * @a : pointer one
 * @b : pointer two
 * Return: nothing.
 */


void swap_int(int *a, int *b)
{
int tempValue;
tempValue = *a;
*a = *b;
*b = tempValue;
}
