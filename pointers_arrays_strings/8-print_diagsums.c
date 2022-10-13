#include <stdio.h>

void	print_diagsums(int *a, int size)
{
	int	**m;
	int	i;
	int	a;
	int	b;

	m = (int **) a;
	a = 0;
	b = 0;
	for (i = 0; i < size; i++)
	{
		a += m[i][i];
		b += m[size - 1 - i][size - 1 - i];
	}
	printf("%d, %d\n", a, b);
}
