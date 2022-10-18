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
 *
 * Return: int
 */
int	error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	return (1);
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
 * check_digits - function
 * @str: char ptr
 *
 * Return: int
 */
int	check_digits(char *str)
{
	int	x;

	for (x = 0; str[x]; x++)
	{
		if (!((str[x] >= '0') && (str[x] <= '9')))
			return (0);
	}
	return (1);
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
	int	r;
	int	v;

	if (argc != 2)
		error();
	else
	{
		r = 0;
		v = _atoi(argv[1]);
		if (v < 0)
			ft_putnbr(0);
		else
		{
			while (v >= 25)
			{
				v -= 25;
				r++;
			}
			while (v >= 10)
			{
				v -= 10;
				r++;
			}
			while (v >= 5)
			{
				v -= 5;
				r++;
			}
			while (v >= 2)
			{
				v -= 2;
				r++;
			}
			r += v;
			ft_putnbr((long) r);
		}
	}
	_putchar('\n');
	return (0);
}
