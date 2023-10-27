#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Reset the value of an integer pointer to 98.
 * @s: A pointer to an s.
 * Return: length
 */
int _strlen(char *s)
{
	int L;

	for (L = 0; s[L] != '\0'; L++)
	;

	return (L);
}
