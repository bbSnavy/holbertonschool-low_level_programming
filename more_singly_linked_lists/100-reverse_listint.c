#include "lists.h"

/**
 * reverse_listint - function
 * @head: listint_t ptr ptr
 *
 * Return: listint_t ptr
*/
listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*r;
	listint_t	*p;
	listint_t	*c;
	listint_t	*n;

	if (!head)
		return (0);
	r = *head;
	if (!r)
		return (0);
	p = 0;
	c = r;
	n = 0;
	while (c)
	{
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	*head = p;
	return (r);
}
