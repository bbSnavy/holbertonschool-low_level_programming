#include "main.h"

/**
 * rev_string - function
 * @str: char ptr
 */
void	rev_string(char *str)
{
	int	l;
	int	i;
	char	c;

	for (l = 0; str[l]; l++)
		;
	for (i = 0; i < (l / 2); i++)
	{
		c = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = c;
	}
}
