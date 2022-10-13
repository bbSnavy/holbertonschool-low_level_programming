/**
 * ft_strlen - function
 * @str: char ptr
 *
 * Return: int
 */
int	ft_strlen(char *str)
{
	int	x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * _strstr - function
 * @haystack: char ptr
 * @needle: char ptr
 *
 * Return: char ptr
 */
char	*_strstr(char *haystack, char *needle)
{
	int	l;
	int	x;
	int	m;

	if (haystack == 0 || needle == 0)
		return (0);
	l = ft_strlen(needle);
	if (l < 1)
		return (haystack);
	for (x = 0; haystack[x]; x++)
	{
		m = 0;
		while (haystack[x + m] && haystack[x + m] == needle[m])
		{
			m++;
			if (m == l)
				return (&haystack[x]);
		}
	}
	return (0);
}
