#include <stdio.h>

/**
 * func - Function
 * @n: The number to check
 *
 * Return: text for whether n is positive or negative
 */
char *func(int n)
{
	if (n < 0)
		return ("negative");
	return ("positive");
}


/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	int n;

	printf("%d is %s", n, func(n));
	return (0);
}
