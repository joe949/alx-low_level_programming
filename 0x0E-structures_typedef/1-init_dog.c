#include<stdlib.h>
#include "dog.h"

/**
 * init_dog - initialzes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d == malloc(sizeof(struct dog));
	d_>name = name;
	d_>age = age;
	d_>owner = owner;
}
