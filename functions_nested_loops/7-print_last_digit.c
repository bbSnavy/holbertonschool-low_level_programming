#include "main.h"

/**
 * print_last_digit - function
 * @n: value
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
