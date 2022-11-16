#include "lists.h"

/**
 * reverse_listint - function
 * @head: listint_t ptr ptr
 *
 * Return: listint_t ptr
*/
listint_t	*reverse_listint(listint_t **head)
{
	context_t	ctx;

	if (!head)
		return (0);
	ctx.r = *head;
	if (!ctx.r)
		return (0);
	ctx.p = 0;
	ctx.c = ctx.r;
	ctx.n = 0;
	while (ctx.c)
	{
		ctx.n = ctx.c->next;
		ctx.c->next = ctx.p;
		ctx.p = ctx.c;
		ctx.c = ctx.n;
	}
	*head = ctx.p;
	return (ctx.r);
}
