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
		if (x < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + x % 10);
		}
		else if (x < 100)
		{
			_putchar(' ');
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
		}
		else
		{
			_putchar('0' + x / 100);
			_putchar('0' + x / 10 % 10);
			_putchar('0' + x % 10);
		}
	}
	else
	{
		_putchar('0' + x % 10);
	}
}

/**
 * print_times_table - function
 * @n: number
 */
void	print_times_table(int n)
{
	int	x;
	int	y;

	if (n < 0 || n > 15)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			func(x * y, y > 0);
			if (y == n)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
