#include <stdio.h>

/**
 * print_array - function
 * @a: int ptr
 * @n: int
 */
void	print_array(int *a, int n)
{
	int	x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if ((x + 1) < n)
			printf(", ");
	}
	printf("\n");
}
