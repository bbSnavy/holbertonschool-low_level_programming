#include "search_algos.h"

/**
 * binary_search_print - function
 * @array: []int
 * @size: size_t
*/
void	binary_search_print(int *array, size_t size)
{
	size_t	x;

	if (array == 0)
		return;
	if (size < 1)
		return;
	printf("Searching in array: ");
	for (x = 0; x < size; x++)
	{
		printf("%d", array[x]);
		if ((x + 1) < size)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_runtime - function
 * @a: []int
 * @l: size_t
 * @r: size_t
 * @v: int
 *
 * Return: int
*/
int	binary_search_runtime(int *a, size_t l, size_t r, int v)
{
	int	m;

	if (a == 0)
		return (-1);
	if (r < l)
		return (-1);
	binary_search_print(a + l, r - l + 1);
	m = l + (r - l) / 2;
	if (a[m] == v)
		return (m);
	else if (a[m] > v)
		return (binary_search_runtime(a, l, m - 1, v));
	else
		return (binary_search_runtime(a, m + 1, r, v));
}

/**
 * binary_search - function
 * @array: []int
 * @size: size_t
 * @value: int
 *
 * Return: int
*/
int	binary_search(int *array, size_t size, int value)
{
	if (array == 0)
		return (-1);
	if (size < 1)
		return (-1);
	return (binary_search_runtime(array, 0, size - 1, value));
}
