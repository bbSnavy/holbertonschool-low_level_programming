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

	r = add_dnodeint_new_at_index(n);
	if (r == 0)
		return (0);
	if (idx == 0)
		return (add_dnodeint(h, n));
	a = *h;
	for (x = 0; x != idx - 1; x++)
	{
		if (a == 0)
			return (0);
		a = a->next;
	}
	if (a)
	{
		r->prev = a;
		r->next = a->next;
		if (a->next)
			(a->next->prev) = r;
		a->next = r;
	}
	return (r);
}
