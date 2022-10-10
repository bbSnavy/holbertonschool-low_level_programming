/**
 * _strcpy - function
 * @dest: char ptr
 * @src: char ptr
 *
 * Return: dest
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
