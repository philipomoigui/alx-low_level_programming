#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: the concatenated characters
 */

char *_strcat(char *dest, char *src)
{
int i, j;
char *p;

for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}

dest[i] = '\0';
p = dest;
return (p);
}
