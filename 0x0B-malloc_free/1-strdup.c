#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 *
 * @str: string to copy
 * Return: pointer to a new string
 */

char *_strdup(char *str)
{
int i, j;
char *p;

for (i = 0; str[i] != '\0'; i++)
;

if (*str == '\0')
return (NULL);

p = (char *) malloc(sizeof(char) * i);

if (p == NULL)
return (NULL);

for (j = 0; str[j] != '\0'; j++)
p[j] = str[j];

return (p);
}
