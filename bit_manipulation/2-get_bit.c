#include "main.h"
#include <limits.h>

/**
 * get_bit - function
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
*/
int	get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(ULONG_MAX) * 8))
		return (-1);
	return (!!(n & (1 << index)));
}
