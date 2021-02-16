#include "holberton.h"

/**
 * _puts - prints s string followed by a new line
 *
 * @str: string to print to standard out
 *
 * Return: nothing
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);

 _putchar('\n');
}
