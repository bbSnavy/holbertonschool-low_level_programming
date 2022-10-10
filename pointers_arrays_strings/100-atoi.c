#include "main.h"

/**
 * _atoi - function
 * @s: char ptr
 *
 * Return: int value of string s
 */
int	_atoi(char *s)
{
	unsigned int	a;
	unsigned int	m;
	int		c;
	int		x;

	m = -1 / 2;
	a = 0;
	c = 1;
	x = 0;
	for (; s[x] && !((s[x] >= '0') && (s[x] <= '9')); x++)
		if (s[x] == '-')
			c = -c;
	for (; s[x] && ((s[x] >= '0') && (s[x] <= '9')); x++)
		a = a * 10 + s[x] - '0';
	if (c == -1)
	{
		a = ~a + 1;
	}
	return (*((int *) (&a)));
}
