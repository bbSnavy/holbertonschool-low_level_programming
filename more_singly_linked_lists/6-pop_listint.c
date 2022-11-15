#include "lists.h"

/**
 * free_node_pop - function
 * @node: listint_t ptr
 */
void	free_node_pop(listint_t *node)
{
	if (!node)
		return;
	free(node);
}

/**
 * pop_listint - function
 * @head: listint_t ptr ptr
 *
 * Return: int
*/
int	pop_listint(listint_t **head)
{
	int		r;
	listint_t	*p;

	if (!head)
		return (0);
	p = *head;
	if (!p)
		return (0);
	*head = (*head)->next;
	r = p->n;
	free_node_pop(p);
	return (r);
}
