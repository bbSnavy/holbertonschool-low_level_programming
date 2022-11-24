#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: unsigned long int
 *
 * Return: hash_table_t ptr
*/
hash_table_t   *hash_table_create(unsigned long int size)
{
	hash_table_t	*r;
	hash_node_t	**a;
	unsigned long	x;

	a = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (a == 0)
		return (0);
	r = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (r == 0)
	{
		free(a);
		return (0);
	}
	r->size = size;
	r->array = a;
	for (x = 0; x < size; x++)
		r->array[x] = NULL;
	return (r);
}
