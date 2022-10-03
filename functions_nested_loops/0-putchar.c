#include "main.h"

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	char	*str;
	int	i;

	str = "_putchar\n";
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
