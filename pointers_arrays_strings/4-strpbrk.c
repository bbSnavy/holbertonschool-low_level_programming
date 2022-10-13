/**
 * _strpbrk - function
 * @s: char ptr
 * @accept: char ptr
 *
 * Return: char ptr
 */
char	*_strpbrk(char *s, char *accept)
{
	int	x;
	int	y;

	for (x = 0; accept[x]; x++)
	{
		for (y = 0; s[y]; y++)
		{
			if (s[y] == accept[x])
			{
				return (&s[y]);
			}
		}
	}
	return (0);
}
