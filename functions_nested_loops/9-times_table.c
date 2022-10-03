#include "main.h"

/**
 * func - function
 * @x: value
 * @f: flag
 */
void	func(int x, int f)
{
	if (f)
	{
		if (x > 9)
			_putchar('0' + x / 10);
		else
			_putchar(' ');
	}
	_putchar('0' + x % 10);
}

/**
 * times_table - function
 */
void	times_table(void)
{
	int	x;
	int	y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			func(x * y, y > 0);
			if (y == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
