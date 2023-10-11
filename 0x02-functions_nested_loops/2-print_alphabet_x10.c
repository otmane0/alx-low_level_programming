#include"main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times followed
 * by a new line
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
