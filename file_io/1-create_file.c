#include "main.h"

/**
* create_file - function
* @filename: const char ptr
* @text_content: char ptr
*
* Return: int
*/
int	create_file(const char *filename, char *text_content)
{
	int	f;
	int	l;
	int	x;

	if (filename == 0)
		return (-1);
	f = open(filename, O_TRUNC | O_WRONLY, 384);
	if (f < 0)
		return (-1);
	for (x = 0; text_content && text_content[x]; x++)
	{
		l = write(f, text_content[x]; 1);
		if (l != 1)
			break;
	}
	close(f);
	if (l != 1)
		return (-1);
	return (1);
}

