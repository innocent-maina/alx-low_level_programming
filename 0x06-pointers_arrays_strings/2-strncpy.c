#include "main.h"

/**
* _strncpy - copies strings to some other place
* @dest: string to be copied to
* @src: string to copy
* @n: size of the buffer
* Return: copied char values
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for ( ; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
