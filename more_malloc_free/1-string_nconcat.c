#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: char ptr
 * @s2: char ptr
 * @n: unsigned int
 *
 * Return: char ptr
 */
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char	*r;
	int	l;
	int	x;

	l = 0;
	if (s1 != 0)
		for (x = 0; s1[x]; x++)
			l++;
	if (s2 != 0)
		for (x = 0; s2[x] && x < n; x++)
			l++;
	r = (char *) malloc(sizeof(char) * (l + 1));
	if (r == 0)
		return (0);
	r[l] = '\0';
	l = 0;
	for (x = 0; s1[x]; x++)
		r[l++] = s1[x];
	for (x = 0; s2[x] && x < n; x++)
		r[l++] = s2[x];
	for (; x < n; x++)
		r[l++] = '\0';
	return (r);
}
