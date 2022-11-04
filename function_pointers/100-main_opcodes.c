#include <stdlib.h>
#include <stdio.h>

/**
 * main - function
 * @argc: int
 * @argv: char ptr ptr
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	int	v;
	int	x;

	if (argc != 2)
		exit(0 * printf("Error\n") + 1);
	v = atoi(argv[1]);
	if (v < 0)
		exit(0 * printf("Error\n") + 2);
	for (x = 0; x < v; x++)
	{
		printf("%02hhx", ((char *) (void *) main)[x]);
		if ((x + 1) < v)
			printf(" ");
	}
	printf("\n");
	return (0);
}
