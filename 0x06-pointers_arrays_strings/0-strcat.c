#include <stdlib.h>
#include "main.h"


/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * Return: return to @dest.
 */

char *_strcat(char *dest, char *src)
{
	int ch = 0;
	int i;

	while (dest[ch])

	ch++;

	for (i = 0; i < src[i]; i++)

	dest[ch++] = src[i];

	return (dest);

}