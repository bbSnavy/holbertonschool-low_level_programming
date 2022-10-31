#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int	op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int	op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int	op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int	op_div(int a, int b)
{
	if (b == 0)
		exit(0 * printf("Error\n") + 100);
	return (a / b);
}

/**
 * op_mod - function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int	op_mod(int a, int b)
{
	if (b == 0)
		exit(0 * printf("Error\n") + 100);
	return (a % b);
}
