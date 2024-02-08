#include "lists.h"

/**
 * print_list - this is the function.
 * @h: text.
 * Return: number.
*/

size_t print_list(const list_t *h)
{

	size_t counter = 0;



	for (counter; h != NULL; counter++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;


	}

	return (counter);
}



