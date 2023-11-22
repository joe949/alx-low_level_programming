#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to head of list
 * @index: index of node
 *
 * Return: nth node, otherewise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	while (head != NULL && ind < index)
	{
		head = head->next;
		ind++;
	}

	if (head == NULL || ind < index)
		return (NULL);

	return (head);
}
