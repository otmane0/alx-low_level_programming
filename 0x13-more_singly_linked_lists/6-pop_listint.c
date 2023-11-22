#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - func
 * @head: array
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *node;

		if (head == NULL || *head == NULL)
		{
			return (0);
		}
		else
		{
		node = *head;
		num = node->n;
		*head = node->next;
		free(node);
		}

	return (num);
}
