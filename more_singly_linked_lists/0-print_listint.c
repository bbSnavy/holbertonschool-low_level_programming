#include "lists.h"

/**
 * print_listint - function
 * @h: const listint_t ptr
 *
 * Return: size_t
*/
size_t	print_listint(const listint_t *h)
{
	size_t	r;
	char	*s;

	r = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		r++;
	}
	return (r);
}
