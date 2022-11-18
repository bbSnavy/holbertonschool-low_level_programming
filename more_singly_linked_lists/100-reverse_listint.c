#include "lists.h"

/**
 * reverse_listint - function
 * @head: listint_t ptr ptr
 *
 * Return: listint_t ptr
*/
listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*a;
	listint_t	*b;

	if (head == 0 || *head == 0)
		return (0);
	a = 0;
	b = 0;
	while (*head)
	{
		a = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = a;
	}
	*head = b;
	return (*head);
}

