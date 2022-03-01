#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees the 2 dimensional array
  * @grid: pointer to the array
  * @height: given height
  * Return: return null
  */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
	{
		free(grid);
	}
	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
