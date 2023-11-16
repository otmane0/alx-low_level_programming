
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - a function.
 * @stringg: string.
 * @i: int.
 * Return: E.
*/
int _strlen(char *stringg)
{
	int i = 0;

	if (stringg)
	{
		while (stringg[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	else
	{
		return (0);
	}
}

/**
 * print_list - a function.
 * @h: int.
 * Return: E.
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", _strlen(h->str), h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
