#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - function
 * @argc: int
 * @argv: char ptr ptr
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	int	a;
	char	*o;
	int	b;
	int	(*f)(int, int);
	int	r;

	if (argc < 4)
		return (0 * printf("Error\n") + 98);
	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);
	f = get_op_func(o);
	if (f == 0 || o[1] != '\0')
		return (0 * printf("Error\n") + 99);
	r = f(a, b);
	printf("%d\n", r);
	return (0);
}
