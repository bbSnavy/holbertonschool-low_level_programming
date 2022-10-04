#include "main.h"

/**
 * print_square - function
 * @n: int
 */
void	print_square(int n)
{
	int	i;
	int	j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
