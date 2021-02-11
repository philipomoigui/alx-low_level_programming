#include <unistd.h>

/**
 * _putchar - write the character c to std out
 * @c: character to write to std out
 * Return: 1 on success and -1 on error
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
