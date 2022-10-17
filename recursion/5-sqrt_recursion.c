#include "main.h"

/**
 * _sqrt_recursion_runtime - function
 * @n: int
 * @x: int
 *
 * Return: int
 */
int	_sqrt_recursion_runtime(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	return (_sqrt_recursion_runtime(n, x + 1));
}

/**
 * _sqrt_recursion - function
 * @n: int
 *
 * Return: int
 */
int	_sqrt_recursion(int n)
{
	return (_sqrt_recursion_runtime(n, 0));
}
