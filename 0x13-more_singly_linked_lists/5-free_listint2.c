#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *tmp = *head;

		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
