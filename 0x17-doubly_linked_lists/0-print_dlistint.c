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
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

