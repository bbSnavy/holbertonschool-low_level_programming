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
	unsigned int	v;
	unsigned int	x;

	v = 0;
	for (x = 0; s1 && s1[x]; x++)
		v++;
	for (x = 0; s2 && s2[x] && x < n; x++)
		v++;
	r = (char *) malloc(sizeof(char) * (v + 1));
	if (r == 0)
		return (0);
	v = 0;
	for (x = 0; s1 && s1[x]; x++)
		r[v++] = s1[x];
	for (x = 0; s2 && s2[x] && x < n; x++)
		r[v++] = s2[x];
	r[v] = '\0';
	return (r);
}
