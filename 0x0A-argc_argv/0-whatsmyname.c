#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints its name,
 * followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: program name argv[0]
 */

int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);

return (EXIT_SUCCESS);
}
