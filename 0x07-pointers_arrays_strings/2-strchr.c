#include "holberton.h"
/**
 * _strchr - function to return a pointer to the first occurence
 * of a character if found
 *
 * @s: string to be checked
 * @c: character to check if exist
 *
 * Return: a pointer to the char on success else 0
 */

char *_strchr(char *s, char c)
{

unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return ((s + i));

}
return (0);
}
