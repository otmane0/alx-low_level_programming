#include"main.h"

/**
 * print_alpahbet_x10
 * Return 0
 * description: function print_alphabet_x10
 *
 * Function definition 
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
