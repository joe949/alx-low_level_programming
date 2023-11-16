#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list
 * @h: pointer to list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
