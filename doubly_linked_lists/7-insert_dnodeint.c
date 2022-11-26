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

	r = 0;
	if (idx == 0)
		return (add_dnodeint(h, n));
	a = *h;
	x = 0;
	if (a)
		while (a->prev)
			a = a->prev;
	while (a)
	{
		if (x == idx)
		{
			if (a->next == 0)
				r = add_dnodeint_end(h, n);
			else
			{
				r = add_dnodeint_new_at_index(n);
				if (r == 0)
					return (0);
				r->next = a->next;
				r->prev = a;
				a->next->prev = r;
				a->next = r;
			}
			break;
		}
		x++;
		a = a->next;
	}
	return (r);
}
