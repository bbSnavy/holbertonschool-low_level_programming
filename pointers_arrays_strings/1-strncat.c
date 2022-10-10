#include "main.h"

/**
 * _strncat - function
 * @dest: char ptr
 * @src: char ptr
 * @n: int
 *
 * Return: dest
 */
char	*_strncat(char *dest, char *src, int n)
{
	int	x;
	int	y;

	if (dest == 0)
		return (dest);
	x = 0;
	while (dest[x])
		x++;
	y = 0;
	while (src[y] && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
