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
	unsigned int i, j, t;
	unsigned char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * (size));
	if (!array)
		return (NULL);

	t = nmemb * size;
	for (i = 0; i < t; i++)
	{
		array[i] = 0;
	}

	return (array);






}

/**
 * Write a function that allocates memory for an array, using malloc.

Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL
*/
