
#include "lists.h"

/**
 * add_nodeint - singly linked list
 * @head: integer
 * @n: num
 * Return: singly linked list node structure
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = strdup(n);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
