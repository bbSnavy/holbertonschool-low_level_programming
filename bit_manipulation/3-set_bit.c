#include "main.h"
#include <limits.h>

/**
* set_bit - function
* @n: unsigned long int ptr
* @index: unsigned int
*
* Return: int
*/
int	set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(ULONG_MAX) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}

