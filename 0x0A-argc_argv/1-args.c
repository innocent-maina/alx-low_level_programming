#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the number
 *  of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: argc
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}

return (EXIT_SUCCESS);
}
