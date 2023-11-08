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
	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	else
	{
		int i = 0, j = 0;

		for (i = 0; i < size; i++)

		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

	}



}
