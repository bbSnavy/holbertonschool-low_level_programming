/**
 * _member - function
 * @s: char ptr
 * @b: char
 * @n: unsigned int
 *
 * Return: char ptr
 */
char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	x;

	if (s == 0)
		return (0);
	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
