#include "main.h"

/**
 * free_grid - free a 2 dimensional grid
 * @grid: int
 * @height: int
 * Return: void 0
*/

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
