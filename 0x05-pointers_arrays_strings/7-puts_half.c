#include "holberton.h"

/**
 * puts_half - print the second half of the string
 *
 * @str: the character to print
 * Return: nothing
 */

void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\n'; i++)
;

i--;
if (i % 2 != 0)
{
int n = (i - 1) / 2;
while (n <= i)
{
_putchar(str[n]);
n++;
}

}
int halfLength = i / 2;

while (halfLength <= i)
{
_putchar(str[halfLength]);
halfLength++;
}
}
