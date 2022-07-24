#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: multiplied number
 */

int main(int argc, char *argv[])
{
int mul = 1;
int i;
if (argc != 3)
{
printf("Error \n");
return (1);
}
else
{

for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
return (0);
}
return (EXIT_SUCCESS);
}
