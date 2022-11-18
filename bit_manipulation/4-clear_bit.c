#include "main.h"

/**
* clear_bit - function
* @n: unsigned long
* @index: unsigned int
*
* Return: int
*/
int	clear_bit(unsigned long *n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

