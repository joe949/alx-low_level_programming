#include "lists.h"

/**
 * add_node - adds new node at start of linked list
 * @head: double pointer to list
 * @str: string to add in node
 * Return: address of new element or NULL incase it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *cur;
	unsigned int len = 0;

	while (str[len])
		len++;

	cur = malloc(sizeof(list_t));
	if (!cur)
		return (NULL);

	cur->str = strdup(str);
	cur->len = len;
	cur->next = (*head);
	(*head) = cur;

	return (*head);
}
