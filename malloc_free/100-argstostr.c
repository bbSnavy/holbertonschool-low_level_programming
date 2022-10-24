#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function
 * @ac: int
 * @av: chat ptr ptr
 *
 * Return: char ptr
 */
char	*argstostr(int ac, char **av)
{
	char	*r;
	int	l;
	int	x;
	int	y;

	l = 0;
	for (x = 0; x < ac; x++)
		for (y = 0; av[x][y]; y++)
			l++;
	l += ac - 1;
	r = (char *) malloc(sizeof(char) * (l + 1));
	if (r == 0)
		return (0);
	l = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			r[l] = av[x][y];
			l++;
		}
		if (x < (ac - 1))
		{
			r[l] = '\n';
			l++;
		}
	}
	r[l] = '\0';
	return (r);
}
