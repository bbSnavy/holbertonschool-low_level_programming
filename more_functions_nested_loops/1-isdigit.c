#include "main.h"

/**
 * _isdigit - function
 * @c: char
 *
 * Return: if c is digit
 */
int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
