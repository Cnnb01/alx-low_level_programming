#include "main.h"
#include <stdlib.h>
/**
*free_grid - a function that frees a 2 dimensional grid
*@grid: The 2D grid to be freed.
*@height: The height of the grid.
*Return: No return value (void)
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
