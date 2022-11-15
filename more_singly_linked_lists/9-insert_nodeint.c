#include "lists.h"

/**
 * new_node_index - function
 * @n: const int
 *
 * Return: list_t ptr
 */
listint_t	*new_node_index(const int n)
{
	listint_t	*r;

	r = (listint_t *) malloc(sizeof(listint_t));
	if (!r)
		return (0);
	r->n = n;
	r->next = 0;
	return (r);
}

/**
 * insert_nodeint_at_index - function
 * @head: listint_t ptr ptr
 * @idx: unsigned int
 * @n: int
 *
 * Return: listint_t ptr
*/
listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t	*r;
	listint_t	*a;
	listint_t	*b;
	unsigned int	x;

	if (!head)
		return (0);
	r = new_node_index(n);
	if (!r)
		return (0);
	a = *head;
	if (!a)
		*head = r;
	else if (idx == 0)
	{
		r->next = *head;
		*head = r;
	}
	else
	{
		for (x = 0; a && (x < idx); x++)
		{
			b = a;
			a = a->next;
		}
		if (x == idx)
		{
			b->next = r;
			r->next = a;
		}
		else
		{
			free(r);
			return (0);
		}
	}
	return (r);
}
