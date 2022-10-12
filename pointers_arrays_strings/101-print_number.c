#include "main.h"

/**
 * print_number_logic - function
 * @n: unsigned int
 */
void	print_number_logic(unsigned int n)
{
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		print_number_logic(n / 10);
		print_number_logic(n % 10);
	}
}

/**
 * print_number - function
 * @n: int
 */
void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number_logic((unsigned int) -n);
	}
	else
	{
		print_number_logic((unsigned int) n);
	}
}
