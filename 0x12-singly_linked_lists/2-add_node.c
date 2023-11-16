#include "lists.h"
/**
 * add_node - function that adds new node at beginning of list
 * @head: pointer to head of linked list
 * @str: string to be added to list
 *
 * Return: address of new element, NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *nn = (list_t *)malloc(sizeof(list_t));

	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);

	if (nn->str == NULL)
	{
		free(nn);
		return (NULL);
	}

	nn->next = *head;

	*head = nn;
	return (*head);
}
