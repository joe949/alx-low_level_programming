#include "lists.h"

/**
 * pop_listint - function that deletes the head of node of a list
 * @head: pointer to head of list
 *
 * Return: head of node's data(n)
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int data = (*head)->n;

	listint_t *temp = *head;

	*head = (*head)->next;
	free(temp);

	return (data);
}
