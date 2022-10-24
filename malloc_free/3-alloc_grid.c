#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: int
 * @height: int
 *
 * Return: int ptr ptr
 */
int	**alloc_grid(int width, int height)
{
	int	**r;
	int	*a;
	int	x;
	int	y;

	if (width < 1 || height < 1)
		return (0);
	r = (int **) malloc(sizeof(int *) * height);
	if (r == 0)
		return (0);
	for (y = 0; y < height; y++)
	{
		a = (int *) malloc(sizeof(int) * width);
		if (a == 0)
		{
			for (x = 0; x < y; x++)
				free(r[x]);
			free(r);
			return (0);
		}
		for (x = 0; x < width; x++)
			a[x] = 0;
		r[y] = a;
	}
	return (r);
}
