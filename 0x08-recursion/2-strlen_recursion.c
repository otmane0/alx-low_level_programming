#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The input string.
 *
 * Return: The length of the string.
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
