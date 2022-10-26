#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function
 * @ptr: void ptr
 * @old_size: unsigned int
 * @new_size: unsigned int
 *
 */
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void	*res;
	int	x;

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr)
	{
		if (new_size == old_size)
			return (ptr);
		res = malloc(new_size);
		if (res == 0)
			return (0);
		for (x = 0; x < old_size; x++)
			((char *) res)[x] = ((char *) old)[x];
		return (res);
	}
	res = malloc(new_size);
	return (res);
}
