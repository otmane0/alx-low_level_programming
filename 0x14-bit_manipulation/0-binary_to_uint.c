
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Reset the value of an integer pointer to 98.
 * @b: A pointer to an s.
 * Return: jds
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0, j = 0;

	if (b == NULL)
		return (0);

	for (i; b[i] != '\0'; i++)
	;

	for (; i > 0; i--)
	{

		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);

		if (b[i - 1] == '1')
		{
			j += 1 << n;
		}
		n++;

	}

	return (j);



}
