#include "holberton.h"

/**
 * print_line - a function to draw a straight line in the terminal
 * @n: the number of lines to draw
 * Return: no return value
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
