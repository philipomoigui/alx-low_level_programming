#include "holberton.h"

/**
 * str_length - find length of a string
 * @s: string to find its legth
 * Return: int
 */

int str_length(char *s)
{
if (*s)
return (1 + str_length(s + 1));
else
return (0);
}

/**
 * palindrome_check - it checks if a string is a palindrome
 * @s: string to check
 * @len: length of string
 * Return: int
 */

int palindrome_check(char *s, int len)
{
if (len <= 1)
return (1);

else if (s[0] == s[len - 1])
return (palindrome_check(s + 1, len - 2));

return (0);
}


/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
int len;

len = str_length(s);

if (len <= 1)
return (1);
else
return (palindrome_check(s, 1));
}
