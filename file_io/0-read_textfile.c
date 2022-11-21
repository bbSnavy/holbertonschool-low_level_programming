#include "main.h"

/**
* read_textfile - function
* @filename: const char ptr
* @letters: size_t
*
* Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	r;
	int	f;
	char	b[1];
	int	l;

	if (filename == 0)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	while (((unsigned long int) r) < letters)
	{
		l = read(f, b, 1);
		if (l == -1 || l <= 0)
			break;
		r += (ssize_t) write(STDOUT_FILENO, b, l);
	}
	close(f);
	return (r);
}

