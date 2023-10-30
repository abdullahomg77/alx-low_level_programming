#include "lists.h"

/**
 * get_nodeint_at_index - returns the n linked list
 * @head: pointer to list
 * @index: n node
 * Return: n node, or returns NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
