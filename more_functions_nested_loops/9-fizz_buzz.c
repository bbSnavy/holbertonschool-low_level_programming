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
	if (n == 0)
		return (0);
	return (printf("%d %s\n", (101-n), &"Fizz\0Buzz\0FizzBuzz"[((101-n)%15==0)*10+((101-n)%15!=0)*((101-n)%5==0)*5])*0+fizzbuzz(n-1));
}

/**
 * main - function
 *
 * Return: Exist status code
 */
int	main(void)
{
	return fizzbuzz(100);
}
