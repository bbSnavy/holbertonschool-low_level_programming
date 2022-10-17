#include "main.h"

/**
 * _puts_recursion - function
 * @s: char ptr
 */
void	_puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}

