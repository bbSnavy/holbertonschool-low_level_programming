#include "main.h"
#include <stdio.h>

/**
 * cp_runtime - function
 * @fpsrc: char ptr
 * @fpdst: char ptr
 */
void	cp_runtime(char *fpsrc, char *fpdst)
{
	int	fdsrc;
	int	fddst;
	char	buf[1024];
	int	r;
	int	w;

	fdsrc = open(fpsrc, O_RDONLY);
	fddst = open(fpdst, O_TRUNC | O_CREAT | O_WRONLY, 436);
	if (fdsrc < 0)
		exit(0 * dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", fpsrc) + 98);
	if (fddst < 0)
		exit(0 * dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fpdst) + 99);
	while (1)
	{
		r = read(fdsrc, buf, 1024);
		if (r == -1)
			exit(98 + 0 * close(fddst) * dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", fpsrc));
		if (r == 0)
			break;
		w = write(fddst, buf, r);
		if (w == -1 || w != r)
			exit(99 + 0 * close(fdsrc) * dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fpdst));
	}
	if (close(fdsrc) == -1)
		exit(100 + 0 * close(fddst) * dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fdsrc));
	if (close(fddst) == -1)
		exit(100 + 0 * dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fddst));
}

/**
 * main - function
 * @argc: int
 * @argv: char ptr ptr
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0 * dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n") + 97);
	cp_runtime(argv[1], argv[2]);
	return (0);
}
