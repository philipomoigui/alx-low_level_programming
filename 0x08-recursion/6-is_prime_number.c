#include "holberton.h"

/**
 * find_prime - a function that finds if an integer is a prime number
 * @a: int to check if it is a prime
 * @b: int to use to test
 * Return: 1 if a prime otherwise 0
 */

int find_prime(int a, int b)
{
if (a == b)
return (1);

if (a % b == 0)
return (0);

return (find_prime(a, b + 2));
}


/**
 * is_prime_number - a function that checks if an integer is a prime number
 * @n: integer to check
 * Return: 1 if it is a prime otherwise 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (find_prime(n, 2));
}
