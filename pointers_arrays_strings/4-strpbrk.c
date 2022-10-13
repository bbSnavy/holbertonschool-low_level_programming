/**
 * ft_strlen - function
 * @str: char ptr
 *
 * return: int
 */
int	ft_strlen(char *str)
{
	int	x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * _strpbrk - function
 * @s: char ptr
 * @accept: char ptr
 *
 * Return: char ptr
 */
char	*_strpbrk(char *s, char *accept)
{
	int	l;
	int	x;
	int	m;

	if (s == 0)
		return (0);
	l = ft_strlen(accept);
	if (l < 1)
		return (s);
	for (x = 0; s[x]; x++)
	{
		m = 0;
		while (s[x + m] && s[x + m] == accept[m])
		{
			m++;
			if (m == l)
				return (&s[x]);
		}
	}
	return (0);
}
