#include "lists.h"

/**
 * free_dlistint - function
 * @head: dlistint_t ptr
*/
void	free_dlistint(dlistint_t *head)
{
	dlistint_t	*a;
	dlistint_t	*b;

	if (head == 0)
		return;
	a = head;
	while (a)
	{
		b = a->next;
		free(a);
		a = b;
	}
}
