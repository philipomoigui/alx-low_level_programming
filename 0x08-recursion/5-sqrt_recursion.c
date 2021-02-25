#include "holberton.h"

/**
 * natural_sqrt - check if number has a natural square root
 * @a: is the number to check for square
 * @b: is the number to use to test
 * Return: the square root or -1 if is not a natural square
 */

int natural_sqrt(int a, int b);
{
if ((b * b) == a)
return (b);

if ((b * b) > a)
return (-1);

return (natural_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - function to calculate the square root of a number
 * @n: number to get the square root
 * Return: int  square root of the number
 */

int _sqrt_recursion(int n)
{
return (natural_sqrt(n, 1));
}
