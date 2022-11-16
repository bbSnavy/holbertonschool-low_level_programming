#include "main.h"

/**
 * binary_to_uint - function
 * @b: const char ptr
 *
 * Return: unsinged int
 */
unsigned int	binary_to_uint(const char *b)
{
	unsigned int	r;
	int		x;

	if (!b)
		return (0);
	r = 0;
	for (x = 0; b[x]; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		if (x > 0)
			r <<= 1;
		r += b[x] - '0';
	}
	return (r);
}
