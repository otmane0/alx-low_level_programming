#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is a program for printing the alphabet in lowercase,
 * except for 'e' and 'q', followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character = 97;

	while (character <= 122)
	{
		if (character != 101)
			if (character != 113)
				putchar(character);
		character++;
	}

	putchar('\n');
	return (0);
}
