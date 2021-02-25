#include "holberton.h"

/**
 * natural_sqrt - checks for natural sqrt.
 * @a: number to check.
 * @b: second number.
 * Return: int
 */

int natural_sqrt(int a, int b)
{
if (b * b == a)
return (b);
if (b * b > a)
return (-1);
return (natural_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 * Return: result.
 */
int _sqrt_recursion(int n)
{
return (natural_sqrt(n, 1));
}
