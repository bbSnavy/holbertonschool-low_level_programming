#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * @d: struct dog ptr
 */
void	print_dog(struct dog *d)
{
	if (d == 0)
		return;
	printf("Name: ");
	if (d->name)
		printf("%s\n", d->name);
	else
		printf("(nil)\n");
	printf("Age: %f\n", d->age);
	printf("Owner: ");
	if (d->owner)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");
}
