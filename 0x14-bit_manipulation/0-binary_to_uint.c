#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number in string f
 * @b: A pointer to a string of '0' and '1' characters.
 *
 * Return: The converted number, or 0 if:
 *		 - b is NULL
 *		 - There are characters in the string that are not '0' or '1'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0, j = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	while (i > 0)
	{
		i--;

		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			j += 1 << n;
		}
		n++;
	}

	return (j);
}
