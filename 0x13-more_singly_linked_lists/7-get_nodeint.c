#include "lists.h"

/**
 * *get_nodeint_at_index - singly linked list
 * @head: integer
 * @index: num
 * Return: val
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;
	int number;

	if (!head)
		return (NULL);

	temp = head;

	for (i; temp; i++)
	{
		if (i == index)
		{
			number = temp->n;
			return (temp);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
