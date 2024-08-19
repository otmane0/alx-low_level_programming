#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * using malloc and initializes it to 0
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, t;
	unsigned char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = nmemb * size;
	array = malloc(t);
	if (!array)
		return (NULL);

	for (i = 0; i < t; i++)
	{
		array[i] = 0;
	}

	return (array);

}
