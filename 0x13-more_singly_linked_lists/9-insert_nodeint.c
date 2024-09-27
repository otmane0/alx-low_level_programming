#include "lists.h"

/**
 * *insert_nodeint_at_index - singly linked list
 * @head: integer
 * @idx: num
 * @n: int
 * Return: val
 */




listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *prev, *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

		if (!head || idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}

	prev = *head;
	for (i = 0; prev; i++)
	{
		temp = prev;

		if (i == idx - 1)
		{

			prev = prev->next;
			temp->next = new_node;
			new_node->next = prev;
			return (new_node);
		}

		prev = prev->next;
	}

	free(new_node);
	return (NULL);

}
