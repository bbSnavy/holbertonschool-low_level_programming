#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: const unsigned int
 *
 * Return: int
 */
int	sum_them_all(const unsigned int n, ...)
{
	va_list		l;
	unsigned int	x;
	int		r;

	if (n == 0)
		return (0);
	va_start(l, n);
	for (x = 0; x < n; x++)
		r += va_arg(l, int);
	va_end(l);
	return (r);
}
