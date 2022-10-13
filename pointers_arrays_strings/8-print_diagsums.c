#include <stdio.h>

void	print_diagsums(int *a, int size)
{
	int	**m;
	int	i;
	int	x;
	int	y;

	m = (int **) a;
	x = 0;
	y = 0;
	for (i = 0; i < size; i++)
	{
		x += m[i][i];
		y += m[size - 1 - i][size - 1 - i];
	}
	printf("%d, %d\n", x, y);
}
