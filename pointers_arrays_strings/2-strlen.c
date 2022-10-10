/**
 * _strlen - function
 * @s: char ptr
 */
int	_strlen(char *s)
{
	int	i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
