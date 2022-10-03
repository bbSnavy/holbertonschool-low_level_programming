#include "main.h"

/**
 * print_sign - function
 * @n: value
 *
 * Return: sign of n
 */
int print_sign(int n)
{
	int	v;

	v = n - '0';
	if (v == 0)
		return ('0');
	if (v < 0)
		return ('-');
	else
		return ('+');
	return (0);
}
