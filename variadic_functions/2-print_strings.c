#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator: const char ptr
 * @n: const unsigned int
 */
void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list		l;
	unsigned int	x;
	char		*s;

	va_start(l, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(l, char *);
		if (s == 0)
			printf("(nil)");
		else
			printf("%s", s);
		if ((x < (n - 1)) && separator)
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
