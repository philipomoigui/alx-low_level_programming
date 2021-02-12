#include <stdio.h>

/**
 * main - print the fizz-buzz test
 *
 * Return: return 0 on success
 */

int main(void)
{
int i;

for (i = 0; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("%s", "FizzBuzz");
else if (i % 3 == 0)
printf("%s", "Fizz");
else if (i % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", i);

if (i != 100)
printf(" ");
}
_putchar('\n');
}
