#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: char ptr
 *
 * Return: char ptr
 */
char	*_strdup(char *str)
{
	char	*res;
	int	x;

	if (str == 0)
		return (0);
	for (x = 0; str[x]; x++)
		;
	res = (char *) malloc(sizeof(char) * (x + 1));
	if (res == 0)
		return (0);
	for (x = 0; str[x]; x++)
		res[x] = str[x];
	res[x] = '\0';
	return (res);
}
