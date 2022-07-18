#include "main.h"
#include <stdio.h>

/**
* *_strchr - Returns a pointer to the first occurrence of the character
* c in the string s, or NULL if the character is not found
* @s: string to search
* @c: character c of the string
* Return: pointer to the first occurence
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}
