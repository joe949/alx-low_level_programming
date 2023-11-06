#include "dog.h"
#include<stdio.h>
/**
 * print_dog - function to print a struct dog
 * @d: struct dog
 *
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %ss\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
