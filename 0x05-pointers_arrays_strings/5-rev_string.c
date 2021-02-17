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
char tmp;

for (i = 0; s[i] != '\0'; i++)
;
i--;

for (j = 0; j <= i; j++)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
i--;
}
}
