#include "main.h"
#include <stdlib.h>

/**
 * print_rev - Reset the value of an integer pointer to 98.
 * @s: A pointer to an s.
 */
void print_rev(char *s)
{
	int line, L;

	for (L = 0; s[L] != '\0'; L++)
	;

	for (line = L - 1; line >= 0; line--)
		putchar(s[line]);
	putchar ('\n');
}
