#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 * @n: number
 */
void	print_to_98(int n)
{
	for (; n != 98; n += (98 - n > 0) * 2 - 1)
		printf("%d, ", n);
	printf("98");
	printf("\n");
}
