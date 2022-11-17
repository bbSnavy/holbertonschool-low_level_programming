#include "main.h"

/**
 * get_bit - function
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
*/
int	get_bit(unsigned long int n, unsigned int index)
{
	return (!!(n & (1 << index)));
}
