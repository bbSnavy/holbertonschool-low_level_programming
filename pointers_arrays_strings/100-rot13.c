/**
 * rot13 - function
 * @str: char ptr
 *
 * Return: char ptr
 */
char	*rot13(char *str)
{
	int	x;
	int	y;
	char	*a;
	char	*b;

	a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (x = 0; str[x]; x++)
	{
		for (y = 0; a[y]; y++)
		{
			if (a[y] == str[x])
			{
				str[x] = b[y];
				break;
			}
		}
	}
	return (str);
}
