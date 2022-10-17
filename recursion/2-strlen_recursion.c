#include "main.h"

/**
 * _strlen_recursion - function
 * @s: char ptr
 *
 * Return: int
 */
int	_strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
