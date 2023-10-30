#include "lists.h"

/**
 * sum_listint - returns the sum of a listint_t list
 * @head: pointer list
 * Return: sum of all data, or 0
*/

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
