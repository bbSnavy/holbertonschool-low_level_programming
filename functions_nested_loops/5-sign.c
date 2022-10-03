#include "main.h"

/**
 * print_sign - function
 * @n: value
 *
 * Return: sign of n
 */
int print_sign(int n)
{
	if (n == 0)
		return ('0');
	if (n < 0)
		return ('-');
	else
		return ('+');
	return (0);
}
