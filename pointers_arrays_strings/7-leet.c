#include "main.h"

/**
 * leet - function
 * @str: char ptr
 *
 * Return: char ptr
 */
char	*leet(char *str)
{
	int	x;
	int	y;
	char	*a;
	char	*b;

	a = "aAeEoOtTlL";
	b = "4433007711";
	for (x = 0; str[x]; x++)
	{
		for (y = 0; a[y]; y++)
		{
			if (str[x] == a[y])
			{
				str[x] = b[y];
				break;
			}
		}
	}
	return (str);
}

