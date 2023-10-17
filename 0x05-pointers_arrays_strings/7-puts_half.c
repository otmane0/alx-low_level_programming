#include <stdlib.h>
#include "main.h"

/**
 * puts_half - half
 * @str: string
 */
void puts_half(char *str)
{
	int lin, lop;

	for (lop = 0; str[lop] != '\0'; lop++)
	;
	lop++;
	for (lin = lop / 2; str[lin] != '\0'; lin++)
		putchar(str[lin]);
	putchar('\n');
}
