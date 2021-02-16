#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
  int i, j, t;
  char *tmp;

  for (i = 0; s[i] != '\o'; i++);

  t = i - 1;

  for (j = 0; j <= t; j++)
    {
      tmp = s[j];
      s[j] = s[t];
      s[t] = tmp;
      t--;
    }
}
