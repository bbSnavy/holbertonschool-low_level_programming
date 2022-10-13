/**
 * _strchr - function
 * @s: char ptr
 * @c: char
 *
 * Return: char ptr
 */
char	*_strchr(char *s, char c)
{
	int	x;

	if (s == 0)
		return (0);
	for (x = 0; s[x]; x++)
		if (s[x] == c)
			return (&s[x]);
	return (0);
}
