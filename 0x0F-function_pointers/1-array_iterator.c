#include "function_pointers.h"

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