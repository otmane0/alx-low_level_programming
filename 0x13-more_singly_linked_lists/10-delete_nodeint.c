#include "lists.h"

/**
 * delete_nodeint_at_index - singly linked list
 * @head: integer
 * @index: num
 * Return: val
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current = *head, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL && counter < index - 1)
	{
		current = current->next;
	}

	if (current == NULL || counter != index)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);

}
