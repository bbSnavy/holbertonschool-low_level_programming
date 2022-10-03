#include <stdio.h>

/**
 * func - Function
 * @x: number
 *
 * Return: x if x is a multiple of 3 or 5
 */
int func(int x)
{
	if ((x % 5) == 0)
		return (x);
	if ((x % 3) == 0)
		return (x);
	return (0);
}

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	int	r;
	int	i;

	r = 0;
	for (i = 0; i < 1024; i++)
		r += func(i);
	printf("%d\n", r);
	return (0);
}
