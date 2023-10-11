#include "main.h"

/**
 * main - Entry point
 *
 * Description: This function prints "_putchar" Followed by a new line
 * int _putchar(char c)
 *
 * Return: Always 0 (Success)
 */

	int main(void)
{
		char str[] = "_putchar";
		int ch;

		for (ch = 0; ch <= 8; ch++)
			putchar(str[ch]);
		_putchar('\n');

		return (0);
}
