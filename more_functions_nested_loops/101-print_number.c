#include "main.h"

/**
 * print_number - function
 * @n: int
 */
void	print_number(int n)
{
	if (n < -100000)
	{
		print_number(-(n / -100000));
		print_number(-(n % -100000));
		return;
	}
	if (n < 0)
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
		_putchar('0' + n % 10);
	}
}
