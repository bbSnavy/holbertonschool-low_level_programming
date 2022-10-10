#include "main.h"

/**
 * print_rev - function
 * @str: char ptr
 */
void	print_rev(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		;
	for (; i >= 0; i--)
		_putchar(str[i]);
	_putchar(10);
}
