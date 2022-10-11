#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct dog
 * if fails, return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, kname, kowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	for (kname = 0; name[kname]; kname++)
		;
	for (kowner = 0; owner[kowner]; kowner++)
		;
	p_dog->name = malloc(kname + 1);
	p_dog->owner = malloc(kowner + 1);
	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < kowner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';
	return (p_dog);
}
