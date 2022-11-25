#include "hash_tables.h"

/**
 * hash_table_delete - function
 * @ht: hash_table_t ptr
*/
void	hash_table_delete(hash_table_t *ht)
{
	unsigned long	x;
	hash_node_t	*p;
	hash_node_t	*o;

	if (ht == 0)
		return;
	if (ht->array != 0 && ht->size > 0)
	{
		for (x = 0; x < ht->size; x++)
		{
			p = ht->array[x];
			while (p)
			{
				o = p;
				p = p->next;
				free(o->key);
				free(o->value);
				free(o);
			}
		}
	}
	free(ht->array);
	free(ht);
}
