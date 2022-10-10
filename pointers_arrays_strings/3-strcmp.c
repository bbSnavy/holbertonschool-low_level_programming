/**
 * _strcmp - function
 * @s1: char ptr
 * @s2: char ptr
 *
 * Return: diff char
 */
char	*_strcmp(char *s1, char *s2)
{
	int	x;

	if (s1 == 0)
		return (0);
	if (s2 == 0)
		return (0);
	x = 0;
	while (s1[x] || s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}
