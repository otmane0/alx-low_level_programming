#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - func.
 * @head: array.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
