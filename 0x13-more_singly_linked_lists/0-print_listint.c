#include "lists.h"

/**
 * print_listint - func.
 * @h: array.
 * Return: 0
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
