#include "lists.h"

/**
 * print_dlistint - function
 * @h: const dlistint_t ptr
 *
 * Return: size_t
 */
size_t	print_dlistint(const dlistint_t *h)
{
	size_t		r;
	dlistint_t	*p;

	r = 0;
	p = (dlistint_t *) h;
	while (p)
	{
		printf("%d\n", p->n);
		r = r + 1;
		p = p->next;
	}
	return (r);
}

