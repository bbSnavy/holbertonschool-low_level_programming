#include "lists.h"

/**
 * print_list - function
 * @h: const list_t ptr
 *
 * Return: size_t
 */
size_t	print_list(const list_t *h)
{
	size_t	r;
	char	*s;

	r = 0;
	if (!h)
		return (0);
	r++;
	while (1)
	{
		s = h->str;
		if (s)
			printf("[%d] %s\n", h->len, s);
		else
			printf("[0] (nil)\n");
		h = h->next;
		if (!h)
			break;
		r++;
	}
	return (r);
}
