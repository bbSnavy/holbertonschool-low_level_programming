#include "main.h"
#include <stdlib.h>

/**
 * array_range - function
 * @min: int
 * @max: int
 *
 * Return: int
 */
int	*array_range(int min, int max)
{
	int	*r;
	int	x;

	if (min > max)
		return (0);
	r = (int *) malloc(sizeof(int) * (abs(min - max) + 1));
	if (r == 0)
		return (0);
	for (x = min; x <= max; x++)
		r[x - min] = x;
	return (r);
}
