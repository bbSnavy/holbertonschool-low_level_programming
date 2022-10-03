#include "main.h"

/**
 * print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
	char	*str;
	int		x;
	int		y;

	str = "abcdefghijklmnopqrstuvwxyz\n";
	for (x = 0; x < 10; x++)
	{
		for (y = 0; str[y]; y++)
		{
			_putchar(str[y]);
		}
	}
}
