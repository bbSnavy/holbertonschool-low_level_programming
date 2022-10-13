/**
 * _memcpy - function
 * @dest: char ptr
 * @src: char ptr
 * @n: unsigned int
 *
 * Return: char ptr
 */
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	if (dest == 0 || src == 0)
		return (0);
	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
