#include "lists.h"
#include<stdlib.h>

/**
 * list_len - numbers the elements in alinked list
 * @h: pointer to list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
