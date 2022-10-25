#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: int
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void		*r;
	unsigned int	x;

	if (nmemb == 0 || size == 0)
		return (0);
	r = malloc(nmemb * size);
	if (r == 0)
		return (0);
	for (x = 0; x < (nmemb * size); x++)
		((unsigned char *) r)[x] = (unsigned char) 0;
	return (r);
}
