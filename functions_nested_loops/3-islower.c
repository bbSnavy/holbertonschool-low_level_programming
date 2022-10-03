#include "main.h"

/**
 * _islower - function
 * @c: char value
 *
 * Return: whether c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
