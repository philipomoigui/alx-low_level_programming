#include "holberton.h"

/**
 * print_numbers - prints num bers from 0 to 9 without std functions
 *
 * Return: no return value
 */

void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if (i == 50 || i == 52)
continue;

_putchar(i);
}
_putchar('\n');
}
