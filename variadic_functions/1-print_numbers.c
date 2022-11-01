#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: const char ptr
 * @n: const unsigned int
 */
void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list		l;
	unsigned int	x;
	int		v;

	if (n < 1)
		return;
	va_start(l, n);
	for (x = 0; x < n; x++)
	{
		v = va_arg(l, int);
		printf(&"%u%s\0%u\b"[3 * (x == (n - 1))], v, separator, v);
	}
	va_end(l);
}
