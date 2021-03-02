#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars and initializes it
 * with a specific char
 *
 * @size: size of the array
 * @c: char to initialize it with
 * Return: pointer to an array or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
unsigned int i; 
char *p;

if (size == 0)
return (0);

p = (char*) malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
p[i] = c;

return (p);
}
