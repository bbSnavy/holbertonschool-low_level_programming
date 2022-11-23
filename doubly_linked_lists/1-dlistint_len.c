#include "lists.h"

/**
 * dlistint_len - function
 * @h: const dlistint_t ptr
 *
 * Return: size_t
 */
size_t	dlistint_len(const dlistint_t *h)
{
	size_t		r;
	dlistint_t	*p;

	r = 0;
	p = (dlistint_t *) h;
	while (p)
	{
		r = r + 1;
		p = p->next;
	}
	return (r);
}

