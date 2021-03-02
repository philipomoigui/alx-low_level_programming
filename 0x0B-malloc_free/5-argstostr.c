#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates arguments of your program
 * @ac: first argument
 * @av: second argument
 * Return: a pointer to a new string or NULL on failure
 */

char *argstostr(int ac, char **av)
{
int i, j, k , len = 0;
char *p;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;

len++;
}

p = (char *) malloc(sizeof(char) * (len + 1));

if (p == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
for (j  = 0; av[i][j] != '\0'; j++)
{
p[k] = av[i][j];
k++;
}
p[k] = '\n';
k++;
}
p[len + 1] = '\0';
return (p);
}
