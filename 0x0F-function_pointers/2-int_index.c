#include "function_pointers.h"


/**
 * int_index - prints an integer, in hexadecimal
 * @array: the integer to print
 * @size: the size.
 *  @cmp: cmp.
 * Return: -1 if the.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{


		for (i = 0; i < size; i++)

		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

	}
	return (-1);

}
