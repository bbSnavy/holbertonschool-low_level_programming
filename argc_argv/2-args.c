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
	int	y;

	for (x = 0; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			_putchar(argv[x][y]);
		}
		_putchar('\n');
	}
	return (0);
}
