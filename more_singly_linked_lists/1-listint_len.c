#include "lists.h"

/**
 * listint_len - function
 * @h: const listint_t ptr
 *
 * Return: size_t
*/
size_t	listint_len(const listint_t *h)
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
