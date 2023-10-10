#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

		for (char character = '0' ; character <= 102 ; character++)
{
			putchar (character);
				if (character == 57)
					character += 39;

}

		putchar('\n');

		return (0);

}
