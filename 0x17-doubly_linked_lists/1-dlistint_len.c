#include "lists.h"
/**
 * dlistint_len - print the list
 * @h: num
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
