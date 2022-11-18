#include "main.h"

/**
* flip_bits - function
* @n: unsigned long
* @m: unsigned long
*
* Return: unsigned int
*/
unsigned int	flip_bits(unsigned long n, unsigned long m)
{
	unsigned int	r;
	unsigned long	x;

	x = n ^ m;
	for (r = 0; x > 0; x >>= 1)
		r += x & 1;
	return (r);
}

