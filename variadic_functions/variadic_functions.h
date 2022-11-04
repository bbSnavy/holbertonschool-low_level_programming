#ifndef VARIADIC_FUNCTIONS_H
# define VARIADIC_FUNCTIONS_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int	sum_them_all(const unsigned int n, ...);
void	print_numbers(const char *separator, const unsigned int n, ...);
void	print_strings(const char *separartor, const unsigned int n, ...);
void	print_all(const char * const format, ...);

/**
 * struct operation - Struct operation
 *
 * @op: op
 * @fn: fn
 */
typedef struct operation
{
	char	op;
	void	(*fn)(va_list l);
} operation_t;

#endif
