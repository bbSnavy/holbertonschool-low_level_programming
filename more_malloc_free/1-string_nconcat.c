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
	char		*r;
	unsigned int	lx;
	unsigned int	ly;
	unsigned int	x;

	lx = 0;
	ly = 0;
	for (x = 0; s1 && s1[x]; x++)
			lx++;
	for (x = 0; s2 && s2[x] && x < n; x++)
			ly++;
	if (n < ly)
		r = (char *) malloc(sizeof(char) * (lx + n + 1));
	else
		r = (char *) malloc(sizeof(char) * (lx + ly + 1));
	if (r == 0)
		return (0);
	lx = 0;
	if (s1 != 0)
		for (x = 0; s1[x]; x++)
			r[lx++] = s1[x];
	if (s2 != 0)
	{
		for (x = 0; s2[x] && x < n; x++)
			r[lx++] = s2[x];
		for (; x < n; x++)
			r[lx++] = '\0';
	}
	r[lx] = '\0';
	return (r);
}
