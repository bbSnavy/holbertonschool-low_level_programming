#include <stdlib.h>
#include "dog.h"

/**
 * ft_strdup - function
 * @str: char ptr
 *
 * Return: char ptr
 */
char	*ft_strdup(char *str)
{
	char	*res;
	int	x;

	for (x = 0; str[x]; x++)
		;
	res = (char *) malloc(sizeof(char) * (x + 1));
	if (res == 0)
		return (0);
	for (x = 0; str[x]; x++)
		res[x] = str[x];
	res[x] = '\0';
	return (res);
}

/**
 * new_dog - function
 * @name: char ptr
 * @age: float
 * @owner: char ptr
 *
 * Return: dog_t ptr
 */
dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*r;
	char	*vn;
	char	*vo;

	if (name == 0)
		return (0);
	if (owner == 0)
		return (0);
	vn = ft_strdup(name);
	if (vn == 0)
		return (0);
	vo = ft_strdup(owner);
	if (vo == 0)
	{
		free(vn);
		return (0);
	}
	r = (dog_t *) malloc(sizeof(dog_t));
	if (r == 0)
	{
		free(vo);
		free(vn);
		return (0);
	}
	r->name = vn;
	r->age = age;
	r->owner = vo;
	return (r);
}
