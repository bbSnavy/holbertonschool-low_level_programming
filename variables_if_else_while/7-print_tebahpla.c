#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
