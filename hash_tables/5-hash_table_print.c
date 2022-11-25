#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: const hash_table_t ptr
*/
void	hash_table_print(const hash_table_t *ht)
{
	unsigned long	x;
	unsigned long	y;
	hash_node_t	*p;
	int		f;

	if (ht == 0)
		return;
	if (ht->array == 0 || ht->size < 1)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] == 0)
			continue;
		for (p = ht->array[x]; p->next; p = p->next)
		{
			printf("'%s': '%s'", p->key, p->value);
			printf(", ");
		}
		if (p)
		{
			printf("'%s': '%s'", p->key, p->value);
			f = 0;
			for (y = x; y < ht->size; y++)
			{
				if (y == x)
					continue;
				if (ht->array[y])
				{
					f = 1;
					break;
				}
			}
			if (f)
				printf(", ");
		}
	}
	printf("}");
	printf("\n");
}
