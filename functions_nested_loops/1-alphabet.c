#include "main.h"

/**
 * print_alphabet - function
 */
int print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
