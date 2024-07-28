#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 *           null byte (\0), to the buffer pointed to by dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
