#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two arguemnts
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int total = 1, i;

if (argc == 3)
{
for (i = 1; i < argc; i++)
total *= atoi(argv[i]);

printf("%d\n", total);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
