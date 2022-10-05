#include <stdio.h>

/**
 * biggest_factor - function
 * @x: long
 *
 * Return: biggest factor of x
 */
long	biggest_factor(long x)
{
	long	r;
	long	i;

	r = -1;

	while (x % 2 == 0)
	{
		r = 2;
		x /= 2;
	}

	while (x % 3 == 0)
	{
		r = 3;
		x /= 3;
	}

	for (i = 5; (i * i) <= x; i += 6)
	{
		while (x % i == 0)
		{
			r = i;
			x /= i;
		}
	}

	if (x > 4)
		r = x;

	return (r);
}

/**
 * main - function
 *
 * Return: Exist status code
 */
int	main(void)
{
	printf("%ld\n", biggest_factor(612852475143));
	return (0);
}
