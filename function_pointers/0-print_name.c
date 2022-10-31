#include "function_pointers.h"

/**
 * print_name - function
 * @name: char ptr
 * @f: function ptr
 */
void	print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
