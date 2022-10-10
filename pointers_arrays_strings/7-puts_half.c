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
	i++;
	for (i /= 2; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
