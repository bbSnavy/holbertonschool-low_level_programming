#include "main.h"

/**
 * print_binary - function
 * @n: unsigned long int
*/
void	print_binary(unsigned long int n)
{
	int	v;
	int	x;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	v = n;
	for (x = 0; v != 0; x++)
		v >>= 1;
	v = x;
	for (x--; x >= 0; x--)
		_putchar('0' + ((n >> x) & 1));
}
