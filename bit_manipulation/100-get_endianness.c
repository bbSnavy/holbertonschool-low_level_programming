#include "main.h"

/**
* get_endianness - function
*
* Return: int
*/
int	get_endianness(void)
{
	void	*p;

	p = (void *) 1;
	return (!!*((char *) (&p)));
}

