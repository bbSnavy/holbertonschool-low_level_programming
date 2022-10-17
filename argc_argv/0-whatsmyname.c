#include "main.h"

/**
 * main - function
 * @argc: int
 * @argv: char ptr ptr
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	int	x;

	(void) argc;
	for (x = 0; argv[0][x]; x++)
		_putchar(argv[0][x]);
	_putchar('\n');
	return (0);
}
