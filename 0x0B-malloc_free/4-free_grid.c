#include <stdlib.h>

/**
 * free_grid - frees up the 2 dimensional array previously created
 * @grid: pointer to the array
 * @height: size of array rows
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
