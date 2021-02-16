#include <unistd.h>

/**
 * _putchar - write the character to std ouput
 * @c: character to write to std output
 * Return: 1 0n success and -1 on error
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
