#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *cur;

	while ((cur = head) != NULL)
	{
		head = head->next;
		free(cur->str);
		free(cur);
	}
}
