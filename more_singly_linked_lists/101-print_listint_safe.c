#include "lists.h"

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
		free(a);
	}
	if (b)
		free(b);
	*h = 0;
}

/**
 * listptr_add - function
 * @h: listptr_t ptr ptr
 * @v: void ptr
 *
 * Return: listptr_t ptr
*/
listptr_t	*listptr_add(listptr_t **h, void *v)
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
 * listptr_get - function
 * @h: listptr_t ptr ptr
 * @v: void ptr
 *
 * Return: int
*/
int	listptr_get(listptr_t **h, void *v)
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
	{
		printf("[0] [0]\n");
		exit(98);
	}
	p = 0;
	a = (listint_t *) (void *) head;
	for (r = 0; a != 0; r++)
	{
		if (listptr_get(&p, a))
		{
			listptr_free(&p);
			exit(98);
		}
		printf("[%p] %d\n", (void *) a, a->n);
		if (listptr_add(&p, a) == 0)
			break;
		a = a->next;
	}
	listptr_free(&p);
	return (r);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    return (0);
}