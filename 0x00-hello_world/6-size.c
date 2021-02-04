#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description - This function prints out the sizes of various
 * data types in C language.
 */

int main()
{
  printf("Size of a char: %lu byte(s)\n", sizeof(char));
  printf("Size of a int: %lu byte(s)\n", sizeof(int));
  printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
  printf("Size of a float: %lu byte(s)\n", sizeof(float));
  return 0;
}
