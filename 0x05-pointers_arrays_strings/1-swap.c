#include "holberton.h"

/**
 * swap_int - swap the value of two integers
 *
 * @a: the first value to swap
 * @b: the second value to swap
 *
 * Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
int tmp = *b;
*b = *a;
*a = tmp;
}
