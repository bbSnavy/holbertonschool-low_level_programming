#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: unsigned int
 * @c: char
 *
 * Return: char ptr
 */
char	*create_array(unsigned int size, char c)
{
	char		*res;
	unsigned int	x;

	if (size == 0)
		return (0);
	res = (char *) malloc(sizeof(char) * size);
	if (res == 0)
		return (0);
	for (x = 0; x < size; x++)
		res[x] = c;
	return (res);
}
