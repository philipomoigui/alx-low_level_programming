#include "holberton.h"

/**
 * print_numbers - prints num bers from 0 to 9 without std functions
 *
 */

void print_numbers()
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
_putchar('\n');
}
