#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
int i, j;
char *tmp;

for (i = 0; s[i] != '\o'; i++)
;

i--;

for (j = 0; j <= i; j++)
{
tmp = s[i];
s[j] = s[i];
s[i] = tmp;
i--;
}
}
