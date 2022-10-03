#include <stdio.h>

/**
 * func - Function
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

	for (i = 0; i < 50; i++)
		printf("%ld\n", func(i + 2));
	return (0);
}
