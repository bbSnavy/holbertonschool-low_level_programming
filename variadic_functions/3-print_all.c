#include "variadic_functions.h"

/**
 * print_all - function
 * @format: const char ptr const
 */
void	print_all(const char * const format, ...)
{
	va_list		l;
	unsigned int	x;
	int		f;
	char		*s;

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(l, format);
	x = 0;
	f = 1;
	while (format[x])
	{
		switch (format[x])
		{
			case 'c':
				f = 1 + 0 * printf("%c", va_arg(l, int));
				break;
			case 'i':
				f = 1 + 0 * printf("%d", va_arg(l, int));
				break;
			case 'f':
				f = 1 + 0 * printf("%f", va_arg(l, double));
				break;
			case 's':
				s = va_arg(l, char *);
				if (s)
				{
					f = 1 + 0 * printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		}
		f = 0 * printf("%s", &", "[2 * (!format[++x] || !f)]);
	}
	va_end(l);
	printf("\n");
}
