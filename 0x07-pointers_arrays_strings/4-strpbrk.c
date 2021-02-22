#include "holberton.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string to be checked
 * @accept: string to check for occurrence
 * Return: a pointer to the byte s that matches of the bytes in accept or null
 */

char *_strpbrk(char *s, char *accept)
{
  int i, j, flag;

  for (i = 0; s[i] != '\0'; i++)
    {
      flag = 0;

      for (j = 0; accept[j] != '\0'; j++)
	{
	  if (s[i] == accept[j])
	    {
	      flag = 1;
	    }
	}
      if (flag == 0)
	{
	  return (s);
	}
    }
  return (0);
}
