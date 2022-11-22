#include "main.h"
#include <stdio.h>

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
			"Error: Can't write to %s\n", fpdst) + 98);
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
			exit(98 + 0 * close(fdsrc) * dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fpdst));
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0 * dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n") + 97);
	cp_runtime(argv[1], argv[2]);
	return (0);
}
