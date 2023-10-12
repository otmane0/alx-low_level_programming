#include "main.h"

/**
 * _isupper - checks if a character is an uppercase letter
 * @c: the character to check
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
