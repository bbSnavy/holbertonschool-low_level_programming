#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: int ptr
 * @size: int
 * @cmp: int function ptr
 *
 * Return: int
 */
int	int_index(int *array, int size, int (*cmp)(int))
{
	int	x;

	if (array == 0 || size < 1 || cmp == 0)
		return (-1);
	for (x = 0; x < size; x++)
		if (cmp(array[x]))
			return (x);
	return (-1);
}
