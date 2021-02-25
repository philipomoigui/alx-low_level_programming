#include "holberton.h"

/**
 * is_prime_number - a function that checks if an integer is a prime number
 * @n: int to check if it is a prime
 * Return: 1 if a prime otherwise 0
 */

int is_prime_number(int n)
{
  int i = 2;

if (n < = 2)
return (n == 2 ? 1 : 0);

if (n % b == 0)
return (0);

return (find_prime(n, i));
}


/**
 * find_prime - a function that checks if an integer is a prime number
 * @n: integer to check
 * @i: divider
 * Return: 1 if it is a prime otherwise 0
 */

int find_prime(int n, int i)
{
if (n != i && n % i == 0)
return (0);

else if (n == 1)
return (1);

return (find_prime(n, i + 1));
}
