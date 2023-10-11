#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: The integer for which the last digit should be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int lastdig;

	if (n == INT_MIN)
	{
		n = -(n + 1);
		lastdig = (n + 1) % 10;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
		}

		lastdig = n % 10;
	}

	_putchar('0' + lastdig);

	return (lastdig);
}
