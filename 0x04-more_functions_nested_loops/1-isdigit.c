#include "holberton.h"

/**
 * _isdigit - checks for a digit between 0 to 9
 * @c: digit to check
 *
 * Return: Return 1 if it is a digit otherwise 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
