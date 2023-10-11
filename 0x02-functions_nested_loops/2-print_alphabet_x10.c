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
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
