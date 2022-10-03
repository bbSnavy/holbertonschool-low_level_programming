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

	x = 0;
	while (x < 10)
	{
		y = x + 1;
		while (y < 10)
		{
			putchar('0' + x);
			putchar('0' + y);
			if (!((x == 8) && (y == 9)))
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
