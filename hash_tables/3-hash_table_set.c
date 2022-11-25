#include "hash_tables.h"

/**
 * _strdup - function
 * @s: const char ptr
 *
 * Return: char ptr
*/
char	*_strdup(const char *s)
{
	char	*r;
	size_t	x;

	if (s == 0)
		return (0);
	for (x = 0; s[x]; x++)
		;
	r = (char *) malloc(sizeof(char) * (x + 1));
	for (x = 0; s[x]; x++)
		r[x] = s[x];
	r[x] = '\0';
	return (r);
}

/**
 * hash_node_new - function
 * @key: const char ptr
 * @val: const char ptr
 *
 * Return: hash_node_t ptr
*/
hash_node_t	*hash_node_new(const char *key, const char *val)
{
	hash_node_t	*r;
	char		*k;
	char		*v;

	k = _strdup(key);
	if (k == 0)
	{
		return (0);
	}
	v = _strdup(val);
	if (v == 0)
	{
		free(k);
		return (0);
	}
	r = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (r == 0)
	{
		free(k);
		free(v);
		return (0);
	}
	r->next = NULL;
	r->key = k;
	r->value = v;
	return (r);
}

/**
 * hash_table_set - function
 * @ht: hash_table_t ptr
 * @key: const char ptr
 * @value: const char ptr
 *
 * Return: int
*/
int	hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t	*p;
	hash_node_t	*n;
	unsigned long	k;

	if (ht == 0)
		return (0);
	if (key == 0 || value == 0)
		return (0);
	if (ht->array == 0 || ht->size < 1)
		return (0);
	k = key_index((const unsigned char *) key, ht->size);
	p = ht->array[k];
	if (p == 0)
	{
		ht->array[k] = hash_node_new(key, value);
		return (ht->array[k] != 0);
	}
	while (p)
	{
		if (strcmp(p->key, key) == 0)
		{
			if (p->value)
				free(p->value);
			p->value = _strdup(value);
			return (p->value != 0);
		}
		p = p->next;
	}
	n = hash_node_new(key, value);
	if (n == 0)
		return (0);
	n->next = ht->array[k];
	ht->array[k] = n;
	return (1);
}
