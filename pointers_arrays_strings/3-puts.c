#include "main.h"

/**
 * _puts - function
 */
void	_puts(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar(0);
}
