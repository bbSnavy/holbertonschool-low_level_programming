#include "main.h"

/**
 * _strcat - function
 * @dest: char ptr
 * @src: char ptr
 *
 * Return: dest
 */
char	*_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	if (dest == 0)
		return (dest);
	x = 0;
	while (dest[x])
		x++;
	y = 0;
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
