#include "hash_tables.h"

/**
 * hash_table_get - function
 * @ht: const hash_table_t ptr
 * @key: const char ptr
 *
 * Return: char ptr
*/
char	*hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t	*p;
	unsigned long	k;

	if (ht == 0)
		return (0);
	if (ht->array == 0 || ht->size < 1)
		return (0);
	k = key_index((const unsigned char *) key, ht->size);
	p = ht->array[k];
	while (p)
	{
		if (strcmp(p->key, key) == 0)
			return (p->value);
		p = p->next;
	}
	return (0);
}
