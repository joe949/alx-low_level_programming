#include "main.h"
#include<stdlib.h>
/**
 * _calloc - function to allocate memory for an array
 * @nmemb: number of elements
 * @size: bytes to be allocated
 * Return: pointer to allocated memory
 * if nmemb or size is 0, retrn NULL
 * if malloc fails, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pr = malloc(nmemb * size);

	if (pr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pr[i] = 0;
	return (pr);
}
