#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 *
 */

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z' followed by a newline.
 */

void print_alphabet(void)
{
for (int a = 97 ; a <= 122 ; a++)

{
	putchar (a);

}
	putchar ('\n');
}

	int main(void)
{
print_alphabet();
}
