#include <stdlib.h>
#include "main.h"

/**
 * rev_string - Reset the value of an integer pointer to 98.
 * @s: A pointer to an s.
 */
void rev_string(char *s)
{
	int l = 0, i;
	char c;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	;
	for (i = j - 1; i >= j / 2; i--)
	{
		c = s[l];
		s[l] = s[i];
		s[i] = c;
		l++;
	}
}
