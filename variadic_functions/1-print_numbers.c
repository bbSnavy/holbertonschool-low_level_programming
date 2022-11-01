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

	va_start(l, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(l, int));
		if ((x < (n - 1)) && separator)
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
