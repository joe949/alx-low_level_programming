#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - function to allocate memory using malloc
 * @b: nuber of bytes
 * Return: pointer to allocated memory,
 * if malloc fails, terminate with status 98
 */
void *malloc_checked(unsigned int b)
{
	char *pr;

	pr = malloc(b);
	if (pr == NULL)
		exit(98);
	return (pr);
}
