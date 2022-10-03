#include <stdio.h>

/**
 * func - Function with horrible difficulty
 * @x: value
 *
 * Returns: number from the fibonacci sequence
 */
long	func(long x)
{
	if (x <= 1)
		return (x);
	return (func(x - 1) + func(x - 2));
}

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	long	i;

	setbuf(stdout, 0);
	for (i = 0; i < 50; i++)
	{
		printf("%ld", func(i + 2));
		if (i == 49)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}
