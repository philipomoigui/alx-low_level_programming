#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14 followed by a space
 *
 * Return: no return value
 */

void more_numbers(void)
{
int i = 0, j;

while (i < 10)
{
for (j = 0; j < 15; j++)
{
if (j > 9)
_putchar('0' + j / 10);
_putchar('0' + j % 10);
}
i++;
putchar('\n');
}
}
