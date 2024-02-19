#include "lists.h"

/**
 * dlistint_len - doubly linked list
 * @h: integ
 * Return: noe
 * Description: doubly linked list node structure
 *
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
