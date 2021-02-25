#include "holberton.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: int to get the factorial
 * Return: the factorial of the number
 */

int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else 
return (n * factorial(n - 1));
}
