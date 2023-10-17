#include "main.h"
/**
 * puts2 - Reset the value of an integer pointer to 98.
 * @str: A pointer to an s.
 */
void puts2(char *str)
{
	int lop;

	for (lop = 0; str[lop] != '\0'; lop++)
	{
		if (lop % 2 == 0)
			putchar (str[lop]);
	}

	putchar ('\n');
}
