#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');

	return (0);
}
