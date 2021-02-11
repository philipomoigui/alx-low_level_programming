#include "holberton.h"

/**
* _isupper -  Checks if character is in uppercase
* @c: character to check
*
* Return: return 1 if uppercase otherwise 0
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
