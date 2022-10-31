#ifndef DOG_H
# define DOG_H

/**
 * struct dog - struct
 * @name: char ptr
 * @age: float
 * @owner: char ptr
 */
struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);

#endif
