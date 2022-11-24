#include "lists.h"

/**
 * add_dnodeint_end_new - function
 * @n: const int
 *
 * Return: dlistint_t ptr
*/
dlistint_t	*add_dnodeint_end_new(const int n)
{
	dlistint_t	*r;

	r = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (r == 0)
		return (0);
	r->n = n;
	return (r);
}

/**
 * add_dnodeint_end - function
 * @head: dlistint_t ptr ptr
 * @n: const int
 *
 * Return: dlistint_t ptr
*/
dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*r;
	dlistint_t	*p;

	if (head == 0)
		return (0);
	r = add_dnodeint_end_new(n);
	p = *head;
	if (r == 0)
		return (0);
	if (p == 0)
		*head = r;
	else
	{
		while (p->next)
			p = p->next;
		p->next = r;
		r->prev = p;
	}
	return (r);
}
