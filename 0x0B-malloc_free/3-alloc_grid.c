#include "main.h"

/**
 * **alloc_grid - return 2 dimesioan arrary
 * @width: int
 * @height: int
 * Return: array
*/

int **alloc_grid(int width, int height)
{
	int **p, row, col;

	p = malloc(sizeof(*p) * height);

	if (height <= 0 || width <= 0 || p == 0)
	{
		return (NULL);
	}
	else
	{
		for (row = 0; row < height; row++)
		{
			p[row] = malloc(sizeof(*p) * width);
			if (p[row] == 0)
			{
				while (row--)
					free(p[row]);
				free(p);
				return (NULL);
			}
			else
			{
				for (col = 0; col < width; col++)
					p[row][col] = 0;
			}
		}
	}
	return (p);
}
