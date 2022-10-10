#include "main.h"

/**
 * _puts - function
 * @str: char ptr
 */
void	_puts(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar(10);
}
