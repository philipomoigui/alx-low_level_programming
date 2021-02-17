#include "holberton.h"

/**
 * print_array - print n elements of an array of integers followed by
 * a new line
 *
 * @n: number of elements of the array to be printed
 * @a: array to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
int len = 0;

while (len <= n - 1)
{
printf("%d", a[len])
if (len != n - 1)
{
printf(", ");
}
len++;
}
printf("\n");
}
