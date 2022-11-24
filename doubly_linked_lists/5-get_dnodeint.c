#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: dlistint_t ptr
 * @index: unsigned int
 *
 * Return: dlistint_t ptr
*/
dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t	*r;
	unsigned int	x;

	if (head == 0)
		return (0);
	r = head;
	for (x = 0; x < index && r; x++)
		r = r->next;
	if (x != index)
		return (0);
	return (r);
}
