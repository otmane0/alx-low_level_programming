#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: the input string.
 * Return.
 */

void _print_rev_recursion(char *s)
{
		if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
