#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2 dimensional grid previously created
 * @grid: pointer
 * @height: int
 *
 *return: 0
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
