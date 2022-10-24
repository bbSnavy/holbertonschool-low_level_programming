#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @s: char ptr
 *
 * Return: char ptr
 */
char	*_strdup(char *s)
{
	char	*r;
	int	x;

	for (x = 0; s[x]; x++)
		;
	r = (char *) malloc(sizeof(char) * (x + 1));
	if (r == 0)
		return (0);
	for (x = 0; s[x]; x++)
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
					r[v] = _strdup(s + x, m);
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
	return (v);
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
	int	x;

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
