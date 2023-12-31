#include "lists.h"
/**
 * add_nodeint - function that adds new node at beginning of list
 * @head: head of list
 * @n: no of element
 *
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
