#include "lists.h"

/**
 * print_list - singly linked list
 * @h: points to the next node
 * Return: num
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	else
	{
		size_t counter = 0;

		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)");
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			counter++;
		}
		return (counter);
	}
}
