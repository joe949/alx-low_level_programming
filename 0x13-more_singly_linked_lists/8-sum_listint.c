#include "lists.h"

/**
 * sum_listint - function that returns sum of all elements of list
 * @head: pointer to head of list
 *
 * Return: sum of elements, if list is empty, 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
