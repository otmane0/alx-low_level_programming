#include"main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times,
 * followed by a new line.
 *
 * Description:
 * This function prints the lowercase alphabet
 * from 'a' to 'z' ten times. Each alphabet sequence
 * is followed by a newline character.
 * The function uses the _putchar function to print characters
 * to the standard output.
 */
void print_alphabet_x10(void)
{
	int line, character;

	for (line = 0; line < 10; line++)
	{
		for (character = 'a'; character <= 'z'; character++)
			_putchar(character);
		_putchar('\n');
	}
}
