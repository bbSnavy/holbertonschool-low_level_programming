#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: dlistint_t ptr ptr
 * @index: unsigned int
 *
 * Return: int
*/
int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t	*p;
	unsigned int	x;

	if (head == 0 || *head == 0)
		return (-1);
	p = *head;
	for (x = 0; x < index; x++)
	{
		if (p->next == 0)
			return (-1);
		p = p->next;
	}
	if (index == 0)
	{
		*head = p->next;
		if (*head)
			(*head)->prev = 0;
	}
	else
	{
		p->prev->next = p->next;
		if (p->next)
			p->next->prev = p->prev;
	}
	free(p);
	return (1);
}

