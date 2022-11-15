#include "lists.h"

/**
 * sum_listint - function
 * @head: listint_t ptr ptr
 *
 * Return: int
*/
int	sum_listint(listint_t *head)
{
	int	r;

	if (!head)
		return (0);
	r = 0;
	while (head)
	{
		r += head->n;
		head = head->next;
	}
	return (r);
}
