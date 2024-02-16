#include "lists.h"

/**
 * sum_listint - singly linked list
 * @head: integer
 * Return: val
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int data;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		data = head->n;
	    sum = sum + data;
		head = head->next;
	}
	return (sum);
}
