#include "hash_tables.h"

/**
 * hash_djb2 - function
 * @str: const unsigned char ptr
 *
 * Return: unsigned long int
*/
unsigned long int	hash_djb2(const unsigned char *str)
{
	unsigned long int	r;
	size_t			x;

	r = 5381;
	for (x = 0; str && str[x]; x++)
		r = ((r << 5) + r) + str[x];
	return (r);
}
