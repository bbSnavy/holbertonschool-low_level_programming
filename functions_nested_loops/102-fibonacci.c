#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	int		i;
	long	x;
	long	y;
	long	z;

	x = 0;
	y = 1;
	for (i = 0; i < 50; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%ld", y);
		if (i == 49)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}
