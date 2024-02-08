#include "lists.h"

/**
 * print_list - this is the function.
 * @h: text.
 * Return: number.
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("%s", h->str);
			h = h->next;
		}
	}

	return (i);
}


