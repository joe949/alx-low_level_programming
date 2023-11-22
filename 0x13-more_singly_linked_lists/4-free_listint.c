#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to header of lists
 *
 * Return:void
 */

void free_listint(listint_t *head)
{
	listnt_t *tmp = head;

	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
