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
char *n = malloc(size * sizeof(int));
if (size == 0 || n == 0)
{
	return (0);
}

else

{
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
}
