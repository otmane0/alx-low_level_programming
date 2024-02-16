#include "lists.h"

/**
 * free_list - singly linked list
 * @head: points to the next node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}


}
