#include "lists.h"

/**
 * listptr_free_free - function
 * @h: listptr_t ptr ptr
 */
void	listptr_free_free(listptr_t **h)
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
		free(a);
	}
	if (b)
		free(b);
	*h = 0;
}

/**
 * listptr_add_free - function
 * @h: listptr_t ptr ptr
 * @v: void ptr
 *
 * Return: listptr_t ptr
*/
listptr_t	*listptr_add_free(listptr_t **h, void *v)
{
	listptr_t	*n;
	listptr_t	*p;

	if (h == 0)
		return (0);
	n = (listptr_t *) malloc(sizeof(listptr_t));
	if (n == 0)
		return (0);
	n->n = 0;
	n->v = v;
	p = *h;
	if (p == 0)
	{
		*h = n;
		return (n);
	}
	while (p->n)
		p = p->n;
	p->n = n;
	return (n);
}

/**
 * listptr_apply_free - function
 * @h: listptr_t ptr ptr
*/
void	listptr_apply_free(listptr_t **h)
{
	listptr_t	*p;

	if (h == 0)
		return;
	p = *h;
	while (p)
	{
		free(p->v);
		p = p->n;
	}
}

/**
 * listptr_get_free - function
 * @h: listptr_t ptr ptr
 * @v: void ptr
 *
 * Return: int
*/
int	listptr_get_free(listptr_t **h, void *v)
{
	listptr_t	*p;

	if (h == 0)
		return (0);
	p = *h;
	if (p == 0)
		return (0);
	while (p)
	{
		if (p->v == v)
			return (1);
		p = p->n;
	}
	return (0);
}

/**
 * free_listint_safe - function
 * @h: listint_t ptr ptr
 *
 * Return: size_t
*/
size_t	free_listint_safe(listint_t **h)
{
	size_t		r;
	listptr_t	*p;
	listint_t	*a;

	if (!h)
		return (0);
	p = 0;
	a = *h;
	if (a == 0)
	{
		*h = 0;
		return (0);
	}
	for (r = 0; a != 0; r++)
	{
		if (listptr_get_free(&p, a) == 1)
			break;
		if (listptr_add_free(&p, a) == 0)
			break;
		a = a->next;
	}
	listptr_apply_free(&p);
	listptr_free_free(&p);
	*h = 0;
	return (r);
}
