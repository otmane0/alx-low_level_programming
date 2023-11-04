#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this is the function.
 * @str: the size of char.
 * Return: 0 if size 0.
*/

char *_strdup(char *str)
{
	int i, size = 0;

	if (str == 0)

	{
		return (0);
	}
	else
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			size++;
		}

		char *n = malloc(size * sizeof(*str));

		if (n == 0)

		return (0);
		else
		{
			for (i = 0; i < size; i++)
			n[i] = str;
			putchar (n[i]);
		}
		free(n);
	}
}
