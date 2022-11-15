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
 * add_nodeint_end - function
 * @head: listint_t ptr ptr
 * @n: const int
 *
 * Return: listint_t ptr
*/
listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*r;
	listint_t	*p;

	if (head == 0)
		return (0);
	r = new_node(n);
	if (r == 0)
		return (0);
	if (*head == 0)
	{
		*head = r;
		return (r);
	}
	p = *head;
	while (p->next)
		p = p->next;
	p->next = r;
	return (r);
}
