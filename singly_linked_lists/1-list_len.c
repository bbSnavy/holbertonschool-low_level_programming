#include "lists.h"

/**
 * list_len - function
 * @h: const list_t ptr
 *
 * Return: size_t
 */
size_t	list_len(const list_t *h)
{
	size_t	r;

	r = 0;
	while (h)
	{
		h = h->next;
		r++;
	}
	return (r);
}
