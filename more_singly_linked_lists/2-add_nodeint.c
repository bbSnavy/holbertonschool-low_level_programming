#include "lists.h"

/**
 * new_node - function
 * @n: const int
 *
 * Return: list_t ptr
 */
listint_t	*new_node(const int n)
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
 * add_nodeint - function
 * @head: listint_t ptr ptr
 * @n: const int
 *
 * Return: listint_t ptr
*/
listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*r;
	listint_t	*p;

	if (!head)
		return (0);
	r = new_node(n);
	if (*head == 0)
	{
		*head = r;
	}
	else
	{
		p = *head;
		*head = r;
		r->next = p;
	}
	return (r);
}
