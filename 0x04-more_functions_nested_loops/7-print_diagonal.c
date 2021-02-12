#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times the character \ will be printed
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');

_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
