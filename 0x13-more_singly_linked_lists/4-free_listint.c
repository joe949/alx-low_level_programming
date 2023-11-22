#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to header of lists
 *
 * Return:void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
