#include "main.h"

/**
 * print_triangle - function
 * @size: int
 */
void	print_triangle(int size)
{
	int	x;
	int	y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if ((size - x - 1) > y)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
