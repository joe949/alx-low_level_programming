#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a list
 * @head: pointer to head of list
 * @n: no of element
 *
 * Return: address of new element, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *cur = *head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
	return (newnode);
}
