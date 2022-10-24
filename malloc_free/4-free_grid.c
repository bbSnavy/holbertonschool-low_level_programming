#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: int ptr ptr
 * @height: int
 */
void	free_grid(int **grid, int height)
{
	int	x;

	if (grid == 0)
		return;
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
