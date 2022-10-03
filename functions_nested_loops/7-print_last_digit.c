#include "main.h"

/**
 * print_last_digit - function
 * @n: value
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int v;

	v = n % 10;
	if (v < 0)
		v *= -1;
	_putchar('0' + v);
	return (v);
}
