#include "main.h"
#include <stdlib.h>

/**
 * *array_range - allocates memory for an array
 * using malloc and initializes it to 0
 * @min: number of elements in the array
 * @max: size of each element in bytes
 *
 * Return: pointer to the allocated memory, NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int i, t, *array;

	if (min > max)
		return (NULL);

	t = max - min;
	array = malloc((t + 1) * sizeof(int));
	if (!array)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);

}
