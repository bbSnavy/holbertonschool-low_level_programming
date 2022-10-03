#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 * @n: number
 */
void	print_to_98(int n)
{
	for (; n < 99; n++)
	{
		printf("%d", n);
		if (n == 98)
			continue;
		printf(", ");
	}
	_putchar('\n');
}
