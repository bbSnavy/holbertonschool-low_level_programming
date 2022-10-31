#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function
 * @s: char ptr
 *
 * Return: int function ptr
 */
int	(*get_op_func(char *s))(int, int)
{
	op_t	ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int	i;

	if (s == 0)
		return (0);
	for (i = 0; ops[i].op; i++)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
	}
	return (0);
}
