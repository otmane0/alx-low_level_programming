#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character = 122;

	for (; character >= 97; character--)
	{
		putchar(character);
	}

	putchar('\n');

	return (0);
}
