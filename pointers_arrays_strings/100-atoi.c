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
	int		c;
	int		x;

	a = 0;
	c = 1;
	for (x = 0; s[x]; x++)
	{
		if (s[x] == '+')
		{
			c = c;
			continue;
		}
		if (s[x] == '-')
		{
			c = -c;
			continue;
		}
		a = a * 10 + s[x] - '0';
	}
	return (c * ((int) a));
}
