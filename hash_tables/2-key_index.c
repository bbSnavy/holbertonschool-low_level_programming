#include "hash_tables.h"

/**
 * key_index - function
 * @key: const unsigned char ptr
 * @size: unsigned long int
 *
 * Return: unsigned long int
*/
unsigned long int	key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
