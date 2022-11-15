#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: listint_t ptr
 * @index: unsigned int
 *
 * Return: listint_t ptr
*/
listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t	*r;
	unsigned int	x;

	if (!head)
		return (0);
	r = head;
	x = 0;
	while (r && (x < index))
	{
		r = r->next;
		x++;
	}
	if (x == index)
	{
		return (r);
	}
	return (0);
}
