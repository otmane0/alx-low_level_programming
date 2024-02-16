#include "lists.h"

/**
 * pop_listint - singly linked list
 * @head: integer
 * Return: singly linked list node structure
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);
	int data = (*head)->n;

	listint_t *temp = *head;

	*head = (*head)->next;
	free(temp);
	return (data);


}

