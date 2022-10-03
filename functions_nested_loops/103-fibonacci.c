#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	int		i;
	long	r;
	long	x;
	long	y;
	long	z;

	r = 0;
	x = 0;
	y = 1;
	z = 1;
	while (1)
	{
		z = x + y;
		x = y;
		y = z;
		if (y > 4000000)
			break;
		if ((y % 2) == 0)
			r += y;
	}
	printf("%ld\n", r);
	return (0);
}
