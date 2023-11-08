#include "function_pointers.h"

/**
 * array_iterator - a function that print a name.
 * @array: the name.
 * @size: a pointer.
 * @action: a return.
 * @*end: the end.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		for (; array <= end; array++)
		{
			action(*array);
		}
	}
}
