#include "main.h"

/**
 * free_grid - func that frees 2 dimentional grid
 * that was previously created
 * @grid: memory block to be freed
 * @height: height of the array
 * Return: return nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
