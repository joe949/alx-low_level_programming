#include "lists.h"
/**
 * add_node_end - function that adds new node at end of list
 * @head: pointer to head of linked linked list
 * @str: string to be added to list
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n = 0;

	list_t *nn = (list_t *)malloc(sizeof(list_t));

	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);

	while (str[n] != '\0')
		n++;

	nn->len = n;
	nn->next = (NULL);

	if (*head == NULL)
		*head = nn;
	else
	{
		list_t *cur = *head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = nn;
	}
	return (*head);
}
