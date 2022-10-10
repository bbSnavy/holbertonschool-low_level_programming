#include "main.h"

/**
 * puts2 - function
 * @str: char ptr
 */
void	puts2(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar(10);
}
