#include "lists.h"

/**
 * pop_listint - singly linked list
 * @head: integer
 * Return: singly linked list node structure
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (data);

}
