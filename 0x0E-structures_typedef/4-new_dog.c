#include "dog.h"
#include<stdlib.h>
/**
 * new_dog - function to create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct dog, if fail return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;
	int i, ln, lo;

	dog_ptr = malloc(sizeof(*dog_ptr));
	if (dog_ptr == NULL || !(name) || !(owner))
	{
		free(dog_ptr);
		return (NULL);
	}

	for (ln = 0; name[ln]; ln++)
		;
	for (lo = 0; owner[lo]; lo++)
		;
	dog_ptr->name = malloc(ln + 1);
	dog_ptr->owner = malloc(lo + 1);

	if (!(dog_ptr->name) || !(dog_ptr->owner))
	{
		free(dog_ptr->owner);
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}

	for (i = 0; i < ln; i++)
		dog_ptr->name[i] = name[i];
	dog_ptr->name[i] = '\0';

	dog_ptr->age = age;

	for (i = 0; i < lo; i++)
		dog_ptr->owner[i] = owner[i];
	dog_ptr->owner[i] = '\0';

	return (dog_ptr);
}
