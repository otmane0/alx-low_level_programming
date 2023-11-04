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
	int i = 0;

	while (dest[ch] != '\0')
		ch++;

	while (src[i] != '\0')
	{
		dest[ch] = src[i];
		ch++;
		i++;
	}
	return (dest);

}
