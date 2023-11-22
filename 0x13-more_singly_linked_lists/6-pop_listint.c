#include "lists.h"

/**
 * pop_listint - function that deletes the head of node of a list
 * @head: pointer to head of list
 *
 * Return: head of node's data(n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;
	listint_t *hd;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	hd = temp->next;
	free(temp);
	*head = hd;

	return (data);
}
