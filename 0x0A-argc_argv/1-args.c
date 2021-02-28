#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the number of argument passed to it
 * @argc: counts of argument
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
