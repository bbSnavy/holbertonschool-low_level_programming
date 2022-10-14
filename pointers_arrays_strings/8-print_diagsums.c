#include <stdio.h>

/**
 * print_diagsums - function
 * @a: int ptr
 * @size: int
 */
void	print_diagsums(int *a, int size)
{
	int	i;
	int	rx;
	int	ry;

	rx = 0;
	ry = 0;
	for (i = 0; i < size; i++)
	{
		rx += a[(size + 1) * i];
		ry += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", rx, ry);
}

