#include "lists.h"

/**
 * add_nodeint - func.
 * @head: head.
 * @n: num.
 * Return: 0
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node = (listint_t *)malloc(sizeof(listint_t));

	if (*head == NULL || first_node == NULL)
	{
		return (NULL);
	}

		first_node->next = NULL;
		first_node->n = n;
		if (*head != NULL)
		{
			first_node->next = *head;
			*head = first_node;
			return (first_node);
		}

}
