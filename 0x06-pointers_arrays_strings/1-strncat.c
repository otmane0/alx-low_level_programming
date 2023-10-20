#include <stdlib.h>
#include "main.h"


/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The source string to be appended.
 * Return: return to @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int ch = 0;
	int i = 0;

	while (dest[ch] != '\0')
		ch++;

	while (i < n && src[i] != '\0')
	{
		dest[ch] = src[i];
		ch++;
		i++;
	}
	return (dest);

}
