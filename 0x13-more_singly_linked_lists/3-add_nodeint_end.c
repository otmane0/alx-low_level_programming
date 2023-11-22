#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *last_node = malloc(sizeof(listint_t));
		listint_t *node;

	if (head == NULL || last_node == NULL)
	{
		return (NULL);
	}
	last_node->next = NULL;
	last_node->n = n;
	if (*head == NULL)
	*head = last_node;
	else
	{
		node = *head;

		while (node->next != NULL)

		{
			node = node->next;
		}
			node->next = last_node;
	}




	return (last_node);

}
