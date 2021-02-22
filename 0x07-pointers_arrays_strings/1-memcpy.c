#include "holberton.h"

/**
 * _memcpy - function that copies some bytes from memory area to another
 * @src: character to copy from
 * @dest: character to copy to
 * @n: the first bytes in memory to be filled.
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; dest[i] != '\0'; i++)
{
for (i = 0; dest[i] != '\0'; i++)
{
if (i < n)
dest[i] = src[i];
}
}
return (dest)
}
