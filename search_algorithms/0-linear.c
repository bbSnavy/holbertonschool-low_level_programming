#include "search_algos.c"

/**
 * linear_search - function
 * @array: []int
 * @size: size_t
 * @value: int
 *
 * Return: int
 */
int	linear_search(int *array, size_t size, int value)
{
	size_t	x;

	if (array == 0)
		return (-1);
	for (x = 0; x < size; x++)
		if (array[x] == value)
			return (x);
	return (-1);
}

