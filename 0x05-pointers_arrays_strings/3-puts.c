#include <stdlib.h>
#include "main.h"
/**
 * _puts - Reset the value of an integer pointer to 98.
 * @str: A pointer to an s.
 */
void _puts(char *str)
{
	int line;

	for (line = 0; str[line] != '\0'; line++)
		putchar(str[line]);
	putchar ('\n');
}
