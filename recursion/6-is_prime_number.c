#include "main.h"

/**
 * is_prime_runtime - function
 * @n: int
 * @x: int
 *
 * Return: int
 */
int	is_prime_runtime(int n, int x)
{
	if ((x * x) > n)
		return (1);
	if ((n % x) == 0)
		return (0);
	return (is_prime_runtime(n, x + 1));
}

/**
 * is_prime_number - function
 * @n: int
 *
 * Return: int
 */
int	is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_runtime(n, 2));
}

