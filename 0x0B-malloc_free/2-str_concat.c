#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new strings
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, j, size = 0;
char *p;

for (i = 0; s1[i] != '\0'; i++)
size++;

for (j = 0; s2[j] != '\0'; j++)
size++;

p = (char *) malloc(sizeof(char) * (size + 1));

for (i = 0; s1[i] != '\0'; i++)
p[i] = s1[i];

for (j = 0; s2[j] != '\0'; j++)
{
p[i] = s2[j];
i++;
}

p[size + 1] = '\0';

return (p);
}
