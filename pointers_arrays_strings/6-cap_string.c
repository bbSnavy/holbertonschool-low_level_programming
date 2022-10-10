/**
 * cap_char - function
 * @c: char
 *
 * Return: int
 */
int	cap_char(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == ',')
		return (1);
	if (c == ';')
		return (1);
	if (c == '.')
		return (1);
	if (c == '!')
		return (1);
	if (c == '"')
		return (1);
	if (c == '(')
		return (1);
	if (c == ')')
		return (1);
	if (c == '{')
		return (1);
	if (c == '}')
		return (1);
	return (0);
}

/**
 * cap_apply - function
 * @c: char
 * @f: int
 *
 * Return: char
 */
char	cap_apply(char c, int f)
{
	if (f)
	{
		if ((c >= 'a') && (c <= 'z'))
			return (c - ('a' - 'A'));
	}
	return (c);
}

/**
 * cap_string - function
 * @str: char ptr
 *
 * Return: char ptr
 */
char	*cap_string(char *str)
{
	int	x;

	if (str == 0)
		return (0);
	for (x = 0; str[x]; x++)
		str[x] = cap_apply(str[x], x == 0 || cap_char(str[x - 1]));
	return (str);
}
