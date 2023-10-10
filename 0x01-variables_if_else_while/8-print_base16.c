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
	char character = 97, num = 0;

	for (num; num < 10; num++)
	{
		int digit = '0' + num;

		putchar(digit);
	}

	for (character; character < 103; character++)
	{
		putchar(character);
	}

	putchar('\n');

	return (0);
}
