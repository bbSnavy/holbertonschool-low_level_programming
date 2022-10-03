#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q')
			continue ;
		if (c == 'e')
			continue ;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
