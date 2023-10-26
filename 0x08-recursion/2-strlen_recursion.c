#include "main.h"

/**
 * _strlen_recursion - Prints a string followed
 * by a new line using recursion.
 * @s: the input string.
 * Return.
 */

int _strlen_recursion(char *s)
{
	int lg = 0;
if (*s > '\0')
{
	lg += _strlen_recursion(s + 1) + 1;
}
return (lg);
}