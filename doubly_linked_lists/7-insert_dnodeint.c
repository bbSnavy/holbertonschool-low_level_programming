#include "lists.h"

/**
 * add_dnodeint_new_at_index - function
 * @n: const int
 *
 * Return: dlistint_t ptr
*/
dlistint_t	*add_dnodeint_new_at_index(const int n)
{
	dlistint_t	*r;

	r = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (r == 0)
		return (0);
	r->n = n;
	return (r);
}

/**
 * insert_dnodeint_at_index - function
 * @h: dlistint_t ptr ptr
 * @idx: unsigned int
 * @n: int
 *
 * Return: dlistint_t ptr
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t	*r;
	dlistint_t	*a;
	unsigned int	x;

	if (h == 0)
		return (0);
	r = add_dnodeint_new_at_index(n);
	if (r == 0)
		return (0);
	if (*h == 0)
	{
		*h = r;
		return (r);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (a = *h; a; a = a->next)
	{
		if (x == idx)
		{
			r->next = a;
			r->prev = a->prev;
			a->prev->next = r;
			a->prev = r;
			return (r);
		}
		x;
	}
	if (x == idx)
		return (add_dnodeint_end(h, n));
	return (r);
}
