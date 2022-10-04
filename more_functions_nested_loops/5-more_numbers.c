#include "main.h"

/**
 * more_numbers - function
 */
void	more_numbers(void)
{
	int	i;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
			_putchar('0' + i / 10);
		_putchar('0' + i % 10);
	}
	_putchar('\n');
}
