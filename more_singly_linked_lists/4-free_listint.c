#include "lists.h"

/**
 * free_node - function
 * @node: listint_t ptr
 */
void	free_node(listint_t *node)
{
	if (!node)
		return;
	free(node);
}

/**
 * free_listint - function
 * @head: list_t ptr
 */
void	free_listint(listint_t *head)
{
	listint_t	*a;
	listint_t	*b;

	if (!head)
		return;
	b = head;
	while (b->next)
	{
		a = b;
		b = b->next;
		free_node(a);
	}
	if (b)
		free_node(b);
}
