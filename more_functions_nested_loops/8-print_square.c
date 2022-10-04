#include "main.h"

/**
 * print_square - function
 * @n: int
 */
void	print_square(int n)
{
	int	i;
	int	j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
