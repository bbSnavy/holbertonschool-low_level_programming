#include "main.h"
#include <stdlib.h>

/**
 * _strndup - function
 * @s: char ptr
 * @l: int
 *
 * Return: char ptr
 */
char	*_strndup(char *s, int l)
{
	char	*r;
	int	x;

	r = (char *) malloc(sizeof(char) * (l + 1));
	if (r == 0)
		return (0);
	for (x = 0; x < l; x++)
		r[x] = s[x];
	r[x] = '\0';
	return (r);
}

/**
 * strtow_eval - function
 * @s: char ptr
 * @r: char ptr ptr
 *
 * Return: int
 */
int	strtow_eval(char *s, char **r)
{
	int	v;
	int	m;
	int	x;
	int	y;

	v = 0;
	m = 0;
	for (x = 0; s[x]; x++)
		if (s[x] == ' ')
		{
			if (m > 0)
			{
				if (r != 0)
				{
					r[v] = _strndup(s + x - m, m);
					if (r[v] == 0)
					{
						for (y = 0; y < v; y++)
							free(r[y]);
						free(r);
						return (0);
					}
				}
				v++;
			}
			m = 0;
		}
		else
			m++;
	if (r != 0)
	{
		if (m > 0)
			r[v++] = _strndup(s + x - m, m);
		r[v] = 0;
	}
	return (v + (m > 0) + 1);
}

/**
 * strtow - function
 * @str: char ptr
 *
 * Return: char ptr ptr
 */
char	**strtow(char *str)
{
	char	**r;

	if (str == 0)
		return (0);
	if (strtow_eval(str, 0) < 1)
		return (0);
	r = (char **) malloc(sizeof(char *) * strtow_eval(str, 0));
	if (r == 0)
		return (0);
	if (strtow_eval(str, r) == 0)
		return (0);
	return (r);
}
