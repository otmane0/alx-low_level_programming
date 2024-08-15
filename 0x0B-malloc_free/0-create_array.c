#include "main.h"
#include <stdlib.h>
/**
 * create_array - this is the function.
 * @size: the size of char.
 * @c: the c.
 * Return: 0 if size 0.
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);


	unsigned int i = 0;
	char *array;


	array = malloc(size * sizeof(char));
	if (!array)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}


	return (array);


}
