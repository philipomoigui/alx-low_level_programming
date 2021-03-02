#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by alloc_grid function
 *
 * @grid: double pointer to 2D array
 * @height: array height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
