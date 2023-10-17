#include "main.h"

/**
 * swap_int - Reset the value of an integer pointer to 98.
 * @a: A pointer to an integer.
 * @b: A pointer to an integer.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
