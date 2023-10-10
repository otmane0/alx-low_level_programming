#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 10
 * separated by a comma and space,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
