#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: exit status code
 */
int	main(void)
{
	int	target;
	int	value;
	char	c;

	srand(time(NULL));
	target = 2772;
	value = 0;
	while (value < (target - 'a'))
	{
		c = 'a' + (rand() % ('z' - 'a'));
		putchar(c);
		value += (int) c;
	}
	putchar(target - value);
	return (0);
}
