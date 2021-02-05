#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: This function check if the random
 * numbers are eihter positive or negative or
 * equal to zero
 *
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
