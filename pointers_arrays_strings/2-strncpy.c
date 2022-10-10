/**
 * _strncpy - function
 * @dest: char ptr
 * @src: char ptr
 * @n: int
 *
 * Return: dest
 */
char	*_strncpy(char *dest, char *src, int n)
{
	int	x;

	if (dest == 0)
		return (0);
	if (src == 0)
		return (0);
	x = 0;
	while (src[x] && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
