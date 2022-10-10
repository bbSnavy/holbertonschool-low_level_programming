/**
 * string_toupper - function
 * @str: char ptr
 *
 * Return: char ptr
 */
char	*string_toupper(char *str)
{
	int	x;
	char	c;

	if (str == 0)
		return (0);
	for (x = 0; str[x]; x++)
	{
		c = str[x];
		if (c >= 'a' && c <= 'z')
			str[x] = c - ('a' - 'A');
	}
	return (str);
}
