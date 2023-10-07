#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase, followed
 * by the alphabet in uppercase, and then adds a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a', CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
