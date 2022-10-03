#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * func - Function
 * @n: The number to check
 *
 * Return: text based on n
 */
char *func(int n)
{
	if (n == 0)
		return ("0");
	if (n > 5)
		return ("greater than 5");
	if (n < 6)
		return ("less than 6 and not 0");
	return (NULL);
}

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is %s\n",
		n, n % 10, func(n % 10));
	return (0);
}
