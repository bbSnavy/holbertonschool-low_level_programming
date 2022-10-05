#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - fizzbuzz function in recursive, because why not?
 * @n: int
 *
 * Return: Exit status code
 */
int	fizzbuzz(int n)
{
	if (n > 100)
		return (0);
	return (printf(&"\0%d"[!printf("%s", &"\0Fizz\0Buzz\0\0\0FizzBuzz"[(int)
		((float)((n % 3 == 0) + 2 * (n % 5 == 0)) * (float)((n % 3 == 0) + 2
		* (n % 5 == 0)) * 1.5f)])], n) * printf("%s", &" \0\n"[(n == 100) *
		2]) * 0 + fizzbuzz(n + 1));
}

/**
 * main - function
 *
 * Return: Exist status code
 */
int	main(void)
{
	return (fizzbuzz(1));
}
