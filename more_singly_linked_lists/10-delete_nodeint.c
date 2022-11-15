#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: listint_t ptr ptr
 * @index: unsinged int
 *
 * Return: int
*/
int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t	*a;
	listint_t	*b;
	unsigned int	x;

	if (!head)
		return (-1);
	a = *head;
	if (!a)
		return (-1);
	if (index == 0)
	{
		*head = a->next;
		free(a);
		return (1);
	}
	for (x = 0; a && (x < index); x++)
	{
		b = a;
		a = a->next;
	}
	if (x == index)
	{
		b->next = a->next;
		free(a);
		return (1);
	}
	else
	{
		return (-1);
	}
}
