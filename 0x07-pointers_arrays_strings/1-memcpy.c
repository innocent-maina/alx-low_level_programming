#include "main.h"
#include <stdio.h>

/**
* *_memcpy - copies n bytes from memory area src to memory area dest
* @n: number of bytes to be copied
* @src: memory area
* @dest: memory to be copied to
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
return (dest);
}

