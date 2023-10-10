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

	int num = 0, digit = '0' + num;

		for (num = ; num < 10 ; num++)

{
		putchar (digit);
		putchar (',');
		putchar (' ');
}

		putchar('\n');

		return (0);

}
