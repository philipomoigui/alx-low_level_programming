#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 *
 * @str: character to print
 *
 * Return: nothing
 */

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str % 2 == 0)
_putchar(str[i]);
}
 _putchar(*(str + i));
}
