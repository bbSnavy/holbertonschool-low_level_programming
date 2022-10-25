#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: unsigned int
 *
 * Return: void ptr
 */
void	*malloc_checked(unsigned int b)
{
	void	*r;

	r = malloc(b);
	if (r == 0)
		exit(98);
	return (r);
}
