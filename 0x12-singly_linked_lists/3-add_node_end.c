#include "lists.h"

/**
 * add_node_end - adds new node at end of linked list
 * @head: double pointer to list
 * @str: string to add to new node
 * Return: address of new element or NULL incase of failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cur;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	cur = malloc(sizeof(list_t));
	if (!cur)
		return (NULL);

	cur->str = strdup(str);
	cur->len = len;
	cur->next = NULL;

	if (*head == NULL)
	{
		*head = cur;
		return (cur);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = cur;

	return (cur);
}
