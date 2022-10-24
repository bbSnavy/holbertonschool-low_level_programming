#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: char ptr
 *
 * Return: char ptr
 */
char	*_strdup(char *str)
{
	char	*r;
	int	x;

	for (x = 0; str[x]; x++)
		;
	r = (char *) malloc(sizeof(char) * (x + 1));
	if (r == 0)
		return (0);
	for (x = 0; str[x]; x++)
		r[x] = str[x];
	r[x] = '\0';
	return (r);
}

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

	if (s1 == 0 && s2 == 0)
	{
		r = (char *) malloc(sizeof(char) * 1);
		if (r == 0)
			return (0);
		r[0] = '\0';
		return (r);
	}
	if (s1 == 0)
		return (_strdup(s2));
	if (s2 == 0)
		return (_strdup(s1));
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
