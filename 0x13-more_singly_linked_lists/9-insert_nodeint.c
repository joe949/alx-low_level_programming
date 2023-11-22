#include "lists.h"

/**
 * insert_nodeint_at_index - func that inserts new node at given position
 * @head: pointer to head of list
 * @idx: index of list where new node should be added
 * @n: integer element
 *
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL || (idx != 0 && *head == NULL))
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		for (unsigned int i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;

		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}

