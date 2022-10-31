#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function
 * @d: dog_t ptr
 */
void	free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
