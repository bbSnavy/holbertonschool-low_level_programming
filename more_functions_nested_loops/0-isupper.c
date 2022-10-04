#include "main.h"

/**
 * _isupper - function
 * @c: char
 *
 * Return: if c is uppercase
 */
int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
