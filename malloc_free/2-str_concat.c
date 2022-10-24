#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 * @s1: char ptr
 * @s2: char ptr
 *
 * Return: char ptr
 */
char	*str_concat(char *s1, char *s2)
{
	char	*r;
	int	l;
	int	x;

	if (s1 == 0 || s2 == 0)
		return (0);
	l = 0;
	for (x = 0; s1[x]; x++)
		l++;
	for (x = 0; s2[x]; x++)
		l++;
	r = (char *) malloc(sizeof(char) * (l + 1));
	if (r == 0)
		return (0);
	l = 0;
	for (x = 0; s1[x]; x++)
	{
		r[l] = s1[x];
		l++;
	}
	for (x = 0; s2[x]; x++)
	{
		r[l] = s2[x];
		l++;
	}
	r[l] = '\0';
	return (r);
}
