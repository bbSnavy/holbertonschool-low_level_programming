#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	int	i;
	char	c;

	i = 0;
	while (i < 53)
	{
		if (i == 52)
			c = '\n';
		else if (i < 26)
			c = 'a' + i;
		else
			c = 'A' + i - 26;
		putchar(c);
		i++;
	}
	return (0);
}
