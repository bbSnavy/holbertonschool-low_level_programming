#include "lists.h"

/**
 * free_node - function
 * @node: list_t ptr
 */
void	free_node(list_t *node)
{
	if (!node)
		return;
	free(node->str);
	free(node);
}

/**
 * free_list - function
 * @head: list_t ptr
 */
void	free_list(list_t *head)
{
	list_t	*a;
	list_t	*b;

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
