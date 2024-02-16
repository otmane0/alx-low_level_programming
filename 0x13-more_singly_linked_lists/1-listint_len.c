#include "lists.h"

/**
 * listint_len - singly linked list
 * @h: integer
 * Return: singly linked list node structure
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
