#include "lists.h"

/**
 * free_node - function
 * @n: listptr_t ptr
 */
void	free_node(listptr_t *n)
{
	if (!n)
		return;
	free(n);
}

/**
 * listptr_free - function
 * @h: listptr_t ptr ptr
 */
void	listptr_free(listptr_t **h)
{
	listptr_t	*a;
	listptr_t	*b;

	if (!h)
		return;
	b = *h;
	while (b->n)
	{
		a = b;
		b = b->n;
		free_node(a);
	}
	if (b)
		free_node(b);
	*h = 0;
}

/**
 * listptr_add - function
 * @h: listptr_t ptr ptr
 * @v: void ptr
 *
 * Return: int
*/
int	listptr_add(listptr_t **h, void *v)
{
	listptr_t	*n;
	listptr_t	*p;

	if (!h)
		return (0);
	n = (listptr_t *) malloc(sizeof(listptr_t));
	if (!n)
		return (0);
	n->n = 0;
	n->v = v;
	if ((*h) == 0)
	{
		*h = n;
		return (1);
	}
	p = *h;
	while (p->n)
	{
		if (p->v == v)
			return (0);
		p = p->n;
	}
	p->n = n;
	return (1);
}

/**
 * print_listint_safe - function
 * @head: const listint_t ptr
 *
 * Return: size_t
*/
size_t	print_listint_safe(const listint_t *head)
{
	size_t		r;
	listptr_t	*p;
	listint_t	*a;

	if (!head)
		exit(98);
	p = 0;
	a = (listint_t *) (void *) head;
	for (r = 0; a != 0; r++)
	{
		printf("[%p] %d\n", (void *) a, a->n);
		if (listptr_add(&p, a) == 0)
			break;
		a = a->next;
	}
	listptr_free(&p);
	return (r);
}
