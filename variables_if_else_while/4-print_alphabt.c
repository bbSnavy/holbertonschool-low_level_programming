#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'q')
			continue ;
		if (c == 'e')
			continue ;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
