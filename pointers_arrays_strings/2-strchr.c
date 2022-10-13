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
	x = 0;
	while (1)
	{
		if (s[x] == c)
			return (&s[x]);
		if (s[x] == 0)
			break;
		x++;
	}
	return (0);
}
