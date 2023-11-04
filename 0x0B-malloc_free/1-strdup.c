#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dups a string.
 * @str: The input string.
 * Return: A pointer to the dupd string.
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int size = 0;

	while (str[size] != '\0')
		size++;

	char *dup = malloc((size + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (int i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}

	dup[size] = '\0';

	return (dup);
}
