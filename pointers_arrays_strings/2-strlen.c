/**
 * _strlen - function
 * @s: char ptr
 *
 * Return: length of string s
 */
int	_strlen(char *s)
{
	int	i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
