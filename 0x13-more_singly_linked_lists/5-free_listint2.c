#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *cur;

	if (head != NULL)
	{
		curr = *head;
		while ((tep = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}
