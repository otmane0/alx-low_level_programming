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
	unsigned int counter = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *change = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0 || (*head) == NULL)
	{

		new_node->n = n;
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	while ((change != NULL) && counter < (idx - 1))
	{
		change = change->next;
		counter++;
	}
	if (change == NULL || counter != idx - 1)
	{
		free(new_node);
		return (NULL);
	}


	new_node->next = change->next;
	change->next = new_node;

	return (new_node);

}
