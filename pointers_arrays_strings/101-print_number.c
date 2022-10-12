#include "main.h"

/**
 * print_number - function
 * @n: int
 */
void	print_number(int n)
{
	int	x;

	if (n < -1000)
	{
		print_number(n / 1000);
		x = (-n) % 1000;
		if (x < 100)
			_putchar('0');
		print_number(0 - (n % 1000));
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}

