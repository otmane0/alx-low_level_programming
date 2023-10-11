#include"main.h"

/**
 * print_alpahbet_x10
 *
*/

void print_alphabet_x10(void)
{
	int line, character;

	for (line = 0; line <= 10; line++)
	{
		for (character = 'a'; character <= 'z'; character++)
			_putchar(character);
		_putchar('\n');
	}
}
