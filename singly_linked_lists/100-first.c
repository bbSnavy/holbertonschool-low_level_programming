#include <stdio.h>

void	func()	__attribute__	((constructor));
void	func()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
