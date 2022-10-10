#include "main.h"

/**
 * puts_half - function
 * @str: char ptr
 */
void	puts_half(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		;
	for (i = (i - (i % 2 == 1)) / 2; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
