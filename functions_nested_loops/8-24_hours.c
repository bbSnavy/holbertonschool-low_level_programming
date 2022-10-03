#include "main.h"

/**
 * func - function
 * @x: hours
 * @y: minutes
 */
void	func(int x, int y)
{
	_putchar('0' + x / 10);
	_putchar('0' + x % 10);
	_putchar(':');
	_putchar('0' + y / 10);
	_putchar('0' + y % 10);
	_putchar('\n');
}

/**
 * jack_bauer - function
 */
void	jack_bauer(void)
{
	int	x;
	int	y;

	for (x = 0; x < 24; x++)
		for (y = 0; y < 60; y++)
			func(x, y);
}
