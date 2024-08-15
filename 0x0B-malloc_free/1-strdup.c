#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Dups a string.
 * @str: The input string.
 * Return: A pointer to the dupd string, or NULL on failure.
 */
char *_strdup(char *str)
{
	int j = 0, i = 0;
	char *array;

	if (!str)
		return (NULL);

	else
	{
		while (str[i] != '\0')
		{
			i++;
		}

		array = malloc((i + 1) * sizeof(char));
		if (!array)
			return (NULL);

		else
		{
			while (j <= i)

			{
				array[j] = str[j];
				j++;
			}
		}

	}

	return (array);
}
