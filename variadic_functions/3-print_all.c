#include "variadic_functions.h"

/**
 * print_all_char - function
 * @l: va_list
 */
void	print_all_char(va_list l)
{
	printf("%c", va_arg(l, int));
}

/**
 * print_all_int - function
 * @l: va_list
 */
void	print_all_int(va_list l)
{
	printf("%d", va_arg(l, int));
}

/**
 * print_all_float - function
 * @l: va_list
 */
void	print_all_float(va_list l)
{
	printf("%f", va_arg(l, double));
}

/**
 * print_all_string - function
 * @l: va_list
 */
void	print_all_string(va_list l)
{
	char	*s;

	s = va_arg(l, char *);
	printf(&"%s\0(nil)"[(s == 0) * 3], s);
}

/**
 * print_all - function
 * @format: const char ptr const
 */
void	print_all(const char * const format, ...)
{
	operation_t	ops[] = {
		{'c', print_all_char},
		{'i', print_all_int},
		{'f', print_all_float},
		{'s', print_all_string},
		{0, 0},
	};
	va_list		l;
	int		x;
	int		y;

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(l, format);
	x = 0;
	while (format[x])
	{
		y = 0;
		while (ops[y].op)
		{
			if (ops[y].op == format[x])
			{
				ops[y].fn(l);
				break;
			}
			y++;
		}
		printf("%s", &"\0, "[format[x + 1] && (y < 4)]);
		x++;
	}
	va_end(l);
	printf("\n");
}
