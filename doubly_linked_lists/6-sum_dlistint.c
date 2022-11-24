#include "lists.h"

/**
 * sum_dlistint - function
 * @head: dlistint_t ptr
 *
 * Return: int
*/
int	sum_dlistint(dlistint_t *head)
{
	int	r;

	r = 0;
	if (head == 0)
		return (r);
	while (head)
	{
		r += head->n;
		head = head->next;
	}
	return (r);
}
