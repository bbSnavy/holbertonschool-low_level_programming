/**
 * _strncpy - function
 * @s: char ptr
 *
 * Return: length of string s
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
