#include "lists.h"

/**
 * listint_len - func.
 * @h: array.
 * Return: 01
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != 0)
	{
		h->next;
		i++;

	}
	return (i);
}
