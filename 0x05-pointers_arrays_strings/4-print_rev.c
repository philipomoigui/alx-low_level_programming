#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: character to print in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; i++);

for (j = i - 1; j >= 0; j--)
 _putchar(str[j]);

  _putchar('/n');
}
