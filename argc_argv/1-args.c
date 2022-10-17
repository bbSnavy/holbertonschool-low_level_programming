#include "main.h"

/**
 * ft_putnbr - function
 * @n: long
 */
void	ft_putnbr(long n)
{
	if (n < 0)
	{
		_putchar('-');
		ft_putnbr(-n);
	}
	else if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

/**
 * main - function
 * @argc: int
 * @argv: char ptr ptr
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	(void) argv;
	ft_putnbr((long) (argc - 1));
	_putchar('\n');
	return (0);
}
