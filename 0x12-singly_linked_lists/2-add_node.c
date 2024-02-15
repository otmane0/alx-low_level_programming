#include "lists.h"

/**
 * add_node - singly linked list
 * @head: points to the next node
 * @str: string
 * Return: num
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	new_node->len = strlen(new_node->str);
	*head = new_node;
	return (new_node);

}
