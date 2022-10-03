#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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

	n = rand() - RAND_MAX / 2;
	printf("%d is %s\n", n, func(n));
	return (0);
}
