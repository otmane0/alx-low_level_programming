#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Dups a string.
 * @str: The input string.
 * Return: A pointer to the dupd string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
