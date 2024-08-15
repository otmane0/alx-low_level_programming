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
	char *array;
	unsigned int i = 0;

	array = malloc(size * sizeof(char));

	if (size == 0 || !array)
		return (NULL);





	else
	{

		while (i < size)
		{
			array[i] = c;
			i++;
		}


	return (array);
	}

}
