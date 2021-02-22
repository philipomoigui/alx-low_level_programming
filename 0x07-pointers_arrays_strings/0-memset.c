#include "holberton.h"

/**
 * _memset - fills the first bytes of the memory
 * area with a constant byte
 *
 * @s: pointer to character to be filled
 * @b: constant byte to fill
 * @n: how much space to be filled
 *
 * Return: a pointer ti the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; s[j] != '\0'; j++)
{
if (j < n)
s[j] = b;
}

return (s);
}
