#include "lists.h"

/**
 * *get_nodeint_at_index - singly linked list
 * @head: integer
 * @index: num
 * Return: val
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	for (; head != NULL; counter++)
	{
		if (counter == index)
		return (head);

		head = head->next;
	}
	return (NULL);
}
