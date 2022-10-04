#include "main.h"

/**
 * print_most_numbers - function
 */
void	print_most_numbers(void)
{
	int	i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2)
			continue;
		if (i == 4)
			continue;
		_putchar('0' + i);
	}
	_putchar('\n');
}
