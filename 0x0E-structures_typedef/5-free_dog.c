#include "dog.h"
#include<stdlib.h>
/**
 * free_dog - free dog
 * @d: struct dog
 *
 * Return: No return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
