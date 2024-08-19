#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes from s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 *
 * Return: Pointer to a newly allocated space
 * in memory containing the result, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, v;
	char *array;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{

	}

	for (j = 0; s2[j] != '\0'; j++)
	{

	}


	if (n >= j)
		n = j;

	array = malloc((i + n + 1) * sizeof(char));
	if (!array)
		return (NULL);

	for (v = 0; v < i; v++)
	{
		array[v] = s1[v];
	}

	for (v = 0; v < n; v++)
	{
		array[i + v] = s2[v];
	}

	array[i + n] = '\0';

	return (array);

}


