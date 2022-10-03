#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	int	x;
	int	y;

	for (x = 0; x <= 98; x++)
		for (y = x + 1; y <= 99; y++)
		{
			putchar('0' + x / 10);
			putchar('0' + x % 10);
			putchar(' ');
			putchar('0' + y / 10);
			putchar('0' + y % 10);
			if (x == 98 && y == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
