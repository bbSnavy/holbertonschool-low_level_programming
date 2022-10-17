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

/**
 * is_palindrome_runtime - function
 * @s: char ptr
 * @x: int
 * @y: int
 *
 * Return: int
 */
int	is_palindrome_runtime(char *s, int x, int y)
{
	if (y >= (x / 2))
		return (1);
	if (s[y] != s[x - 1 - y])
		return (0);
	return (is_palindrome_runtime(s, x, y + 1));
}

/**
 * is_palindrome - function
 * @s: char ptr
 *
 * Return: int
 */
int	is_palindrome(char *s)
{
	return (is_palindrome_runtime(s, _strlen_recursion(s), 0));
}

