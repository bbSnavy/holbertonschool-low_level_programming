#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: const hash_table_t ptr
*/
void	hash_table_print(const hash_table_t *ht)
{
	unsigned long	x;
	hash_node_t	*p;

	if (ht == 0)
		return;
	if (ht->array == 0 || ht->size < 1)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		for (p = ht->array[x]; p; p = p->next)
		{
			printf("'%s': '%s'", p->key, p->value);
			if (p->next && x < (ht->size - 1))
				printf(", ");
		}
		if (ht->array[x] && x < (ht->size - 1))
			printf(", ");
	}
	printf("}");
	printf("\n");
}
