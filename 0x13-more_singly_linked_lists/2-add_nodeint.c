#include "lists.h"

/**
 * add_nodeint - adds a node at the begin
 * @head: pointer to the first element
 * @n: int the new node
 * Return: address of the new, or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
