#include "dog.h"

/**
 * init_dog - function
 * @d: struct dog ptr
 * @name: char ptr
 * @age: float
 * @owner: char ptr
 */
void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
