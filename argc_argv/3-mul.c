#include "main.h"

/**
 * _atoi - function
 * @s: char ptr
 *
 * Return: int value of string s
 */
int     _atoi(char *s)
{
	unsigned int	a;
	int		c;
	int		x;

	a = 0;
	c = 1;
	x = 0;
	for (; s[x] && !((s[x] >= '0') && (s[x] <= '9')); x++)
		if (s[x] == '-')
			c = -c;
	for (; s[x] && ((s[x] >= '0') && (s[x] <= '9')); x++)
		a = a * 10 + s[x] - '0';
	if (c == -1)
		a = ~a + 1;
	return (*((int *) (&a)));
}

/**
 * error - function
 */
void	error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
}

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
	if (argc < 3)
		error();
	else
		ft_putnbr((long) (_atoi(argv[1]) * _atoi(argv[2])));
	_putchar('\n');
	return (0);
}
