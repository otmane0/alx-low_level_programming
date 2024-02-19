#include "lists.h"

/**
 * print_dlistint - doubly linked list
 * @h: integ
 * Return: noe
 * Description: doubly linked list node structure
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		print("%d", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

