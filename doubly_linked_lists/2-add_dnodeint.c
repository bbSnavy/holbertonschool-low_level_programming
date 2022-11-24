#include "lists.h"

/**
 * add_dnodeint_new - function
 * @n: const int
 *
 * Return: dlistint_t ptr
*/
dlistint_t	*add_dnodeint_new(const int n)
{
	dlistint_t	*r;

	r = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (r == 0)
		return (0);
	r->n = n;
	return (r);
}

/**
 * add_dnodeint - function
 * @head: dlistint_t ptr ptr
 * @n: const int
 *
 * Return: dlistint_t ptr
*/
dlistint_t	*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*r;

	if (head == 0)
		return (0);
	r = add_dnodeint_new(n);
	if (r == 0)
		return (0);
	if (*head == 0)
		*head = r;
	else
	{
		r->next = *head;
		(*head)->prev = r;
		*head = r;
	}
	return (r);
}
